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
int Moist;
int Temp;
int Humid;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2); //Initialize the 16x2 LCD
  lcd.setCursor(0,0);
  lcd.print("Plant Pulse - A Project by Hassan Samine.");
  pinMode(PIR, INPUT); //Set pin as input
  pinMode(LED,OUTPUT); //Set pin as output
  pinMode(RELAY,OUTPUT);
}

void loop() {
  //Storing Temperature and Humidity
  DHT.read11(DHT11); //Reads Data from the DHT11 Sensor
  Temp = DHT.temperature; //Stores Temperature in Temp
  Humid = DHT.humidity; //Stores Humidity in Temp
  
  //Storing if motion is detected or not
  PIR_State=digitalRead(PIR); //Reading the PIR sensor's output, whether high or low
  if (PIR_State == 1){
    digitalWrite(LED, HIGH); //If the Sensor is high it means motion is detected so we turn on the LED
  }
  else{
    digitalWrite(LED, LOW); //If the Sensor is low it means no motion is detected so we turn off the LED
  }
  
  //Storing Moisture Lever
  Moist = analogRead(sensorPin); //Moisture level stored in the variable moist

  //Printing Values in LCD Display
  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(Temp);

  lcd.setCursor(7,0);
  lcd.print("H:");
  lcd.print(Humid);

  lcd.setCursor(0,1);
  lcd.print("M:");
  lcd.print(Moist);


}
