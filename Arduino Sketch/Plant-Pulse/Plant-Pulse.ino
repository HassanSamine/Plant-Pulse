#include <dht.h>
#include <LiquidCrystal.h>

dht DHT;
LiquidCrystal lcd(12,11,5,4,3,2); //(RS, E, D4, D5, D6 ,D7)
int DHT11 = 7;
int PIR = 8;
int LED = 6;
int PIR_State = 0;
int RELAY= 13;
int sensorPin = A0; 
int SensorMoist;
int Moist;
int Temp;
int Humid;

void setup() {
  Serial.begin(9600);
  pinMode(PIR, INPUT); //Set pin as input
  pinMode(LED,OUTPUT); //Set pin as output
  pinMode(RELAY,OUTPUT);
  lcd.begin(16,2); //Initialize the 16x2 LCD
  lcd.setCursor(0,0);
  lcd.print("Plant Pulse - A Project by Hassan Samine.");
  delay(1000);
  lcd.clear();
}

void loop() {
  //Storing Values
  DHT.read11(DHT11); //Reading Data from the DHT11 Sensor
  Temp = DHT.temperature; //Storing Temperature in Temp
  Humid = DHT.humidity; //Storing Humidity in Temp
  SensorMoist = analogRead(sensorPin); //Storing Moisture Level from the sensor - Range 0 to 1024
  Moist = map(SensorMoist, 0, 1024, 0, 100); //The map function transforms the 0 to 1024 range to a 0 to 100 range
  
  //Checking if motion is detected or not
  PIR_State=digitalRead(PIR); //Reading the PIR sensor's output, whether high or low
  if (PIR_State == 1){ //If the Sensor is high it means motion is detected
    digitalWrite(LED, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("WARNING! Motion is Detected!");
    Serial.print("WARNING! Motion is Detected!\n");
    delay(3000);
    lcd.clear();
  }
  else{
    digitalWrite(LED, LOW); //If the Sensor is low it means no motion is detected so we turn off the LED
  }
  
  //Printing Values in LCD Display
  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(Temp);
  Serial.print("Temperature = ");
  Serial.println(Temp);

  lcd.setCursor(7,0);
  lcd.print("H:");
  lcd.print(Humid);
  Serial.print("Humidity = ");
  Serial.println(Humid);

  lcd.setCursor(0,1);
  lcd.print("M:");
  lcd.print(Moist);
  Serial.print("Moisture = ");
  Serial.println(Moist);

  //Controlling the Relay
  if (Moist > 60){
    digitalWrite(RELAY, HIGH);
    delay(5000);
    digitalWrite(RELAY, LOW);
  }
  else{
    digitalWrite(RELAY, LOW);
  }

}
