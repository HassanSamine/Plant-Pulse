# Introduction to Learning Arduino

Arduino is a powerful tool that bridges the gap between the digital and physical worlds. Whether you want to build a simple electronic gadget or dive into more advanced projects, Arduino provides a versatile platform for controlling electronic components. This guide aims to provide a foundational understanding of what Arduino is, what it can do, and how to get started with it.

### What Is Arduino?

At its core, Arduino is a platform for building electronic projects. It includes both hardware and software components, making it an all-in-one solution for beginners and experienced makers alike. The hardware is typically an Arduino board, which features a microcontroller—essentially a small computer capable of processing data and executing commands. The software, called the Arduino Integrated Development Environment (IDE), allows users to write, edit, and upload code to the board.

### Understanding Inputs and Outputs

Arduino works as a mediator between input and output devices, enabling you to control the behavior of electronic components through programming.

- **Inputs**: These are devices that gather information from the environment. Examples include sensors that measure temperature, detect light, or sense motion.
- **Outputs**: These are devices that perform actions based on the input data. Examples include LEDs, motors, and speakers.

By connecting inputs and outputs to an Arduino board, you can create interactive projects—such as a smart home system or a robot—and control them using custom logic.

### How Arduino Works

The key role of Arduino is to process input data and execute output actions based on the logic you define in the code. Here’s how the process unfolds:

1. **Hardware**: Select an Arduino board suitable for your project’s requirements. All Arduino boards share the common feature of a microcontroller but may differ in specifications like size, power, and input/output pins.
2. **IDE**: Use the Arduino IDE to write your code. This software simplifies coding and debugging, providing essential tools to upload the program to your board. IDE stands for Integrated Development Environment. Here you can find a tutorial on how to download the Arduino IDE (https://www.youtube.com/watch?v=3awCkLS7gHI&ab_channel=ProgrammingKnowledge2).
3. **Code (Sketch)**: The code you write is referred to as a sketch. Arduino sketches are based on C and C++ programming languages but include specialized functions for Arduino, making them beginner-friendly. Learning Arduino coding can also pave the way for mastering other programming languages.

### Why Learn Arduino?

Learning Arduino is not only an introduction to electronics but also a gateway to the broader world of programming, robotics, and IoT (Internet of Things). It is beginner-friendly and widely supported by an active community, ensuring a wealth of resources, tutorials, and project ideas.

### Getting Started

To begin your journey with Arduino, you need three main components:

1. **Arduino Hardware**: Choose an Arduino board, such as the Arduino Uno, which is ideal for beginners.
2. **Arduino IDE**: Download and install the free Arduino IDE from the official Arduino website.
3. **Code and Components**: Start with simple projects using basic components like LEDs and buttons before advancing to more complex setups with sensors and motors.

# What’s on an Arduino Board

In this chapter, we will dissect the parts of an Arduino board and explain their features and functions. This overview will try to provide a clear understanding of the elements that make up this tool.

## Understanding the Arduino Board

At its core, the most important component is the one highlighted in the Figure below. **The Microcontroller** — the brain of the board — which processes your code and enables communication with the outside world through its pins. These pins can be configured as **inputs** (for reading sensor values) or **outputs** (for controlling devices). Collectively, these pins are referred to as **GPIOs** (General Purpose Input/Output).

**Input Pins** read voltage levels applied to the pins and **Output Pins** adjust the voltage at the pins to control external devices.

GPIO are basically the bridge between your code and the physical components you wish to work with.

![alt text](Microcontroller.png)

## Exploring Pin Headers

The plastic columns filled with holes that you see highlighted on the Arduino board below are called **pin headers**. These headers connect the GPIOs to external components such as wires, resistors, or sensors. Each hole in the pin header corresponds to a microcontroller pin, facilitating electrical connections.

![alt text](Headers.png)

### Digital Pins (1-13)

On one side of the board, you will find **digital pins**, labeled 1 through 13. These pins primarily handle binary input/output (on/off signals), High (5V): Represents an ON state while Low (0V): Represents an OFF state.

Digital pins allow you to control LEDs, buzzers, and other devices. Additionally, they support communication protocols for interacting with more complex peripherals.

Some of these pins have special features, for example **Pins 0 and 1 (TX and RX)** are used for communication via USB. These pins transmit (TX) and receive (RX) data, with corresponding LEDs flash during activity.

**PWM Pins** which are marked with a tilde (~) support **Pulse Width Modulation (PWM)**, which is 
a way to control the amount of power delivered to a device by quickly turning a signal on and off. The "on" time is called the **duty cycle**, and it's expressed as a percentage, **100% duty cycle**: Fully ON (max power), **50% duty cycle**: Half ON, half OFF (half power) and **0% duty cycle**: Fully OFF (no power).
This allows you to do a lot of features such as fading LEDs in and out, controlling motor speeds and driving servo motors by varying voltage levels over time.

### Analog Pins (A0-A5)

On the opposite side of the board, you will find the **analog input pins**, labeled A0 to A5. These pins are connected to the microcontroller’s **Analog-to-Digital Converter (ADC)**, enabling them to read continuous signals and convert them into digital values, they are able to Read data from sensors with variable outputs. For example a temperature sensor’s output voltage varies with temperature changes. By connecting it to an analog pin, the Arduino reads the voltage and converts it into a temperature value via code.

### Power Pins

Next to the analog section are the **power pins**, which provide voltage sources for external components, the **GND** pin which stands for Ground references the lowest voltage on the board. While **5V and 3.3V** pins can be used to supply power to components connected to the board requiring these voltage levels. The **VIN** pin is used to supply external power to the Arduino when not connected via USB, it accepts a voltage input within a specific range (e.g., 7-12V).

### Additional Pins and Features

- **IOREF**: This pin tells shields (add-on boards) what voltage the Arduino is using (5V or 3.3V). It helps shields adjust to work properly without damaging the board.
- **RESET**: This pin lets you restart your Arduino. It’s like rebooting a computer to run your code again from the beginning.
- **AREF (Analog Reference)**: This pin is used when you need your analog sensors to measure with more precision. You can connect a specific reference voltage here to improve accuracy.

### Powering the Arduino

You can power the Arduino board in three main ways: through the **USB port**, which also allows you to program it, via the **DC barrel jack**, which accepts external power sources like batteries or adapters, or using the **VIN pin**, where you can connect a direct voltage source, ensuring it falls within the safe operating range to prevent damage.

## Breadboards

When working with an Arduino, a breadboard is a valuable tool that allows you to easily prototype your circuit without the need for a mess. By using jumper wires, you can create temporary connections between components, making it easier to experiment with different setups. This not only keeps your project neat and organized but also allows for quick adjustments and testing, making it an essential part of any Arduino project.

The Breadboard has a grid of holes where you can insert components like resistors, LEDs, and wires. Inside the breadboard, there are metal clips underneath that connect certain rows of holes. These clips create paths for electricity to flow, allowing you to make connections between different components easily.

The breadboard has two main sections:

1. **Power Rails**: These are the long horizontal rows on the sides, usually marked with "+" and "-" signs. They provide power (positive and negative) to your circuit.
2. **Terminal Strips**: These are the smaller groups of holes in the middle, where most components are placed. The rows in the middle are connected in pairs, so when you place a component's leads into the same row, they are electrically connected.

I have showed in the Figure below how some of these holes are connected

![alt text](Breadboard.png)

# How to Program an Arduino Board

In this chapter of this introductory paper about Arduino, we will be learning the basics of programming an Arduino board. We will cover how every Arduino program is laid out, how to use variables, how to use control structures and the most important Arduino functions. 

## How to Use Setup & Loop Functions and Variables

### *The Setup and Loop functions*

When you first open a new sketch in your Arduino IDE, you will find some lines written just like in the below figure:

![alt text](Setup&Loop.png)

These lines are the two main functions of any Arduino code, the first function is called “Setup”, this is where you put the part of the code that needs too run once, and any code you put here will be executed to to bottom until it reaches the end of the function and moves on to the next function.

The Loop function also executes the code within it from top to bottom, and once it gets to the curly bracket signaling the end of the function it goes back to the beginning and runs the code once again. The code in this function keeps repeating itself until you remove the power from you Arduino board.

These two function “Setup” and “Loop” are extremely important, and will be part of any Arduino code you will write, in fact if you leave one of these codes out you’re going to get an error.

### *Variables*

Variables are also an essential part of programming an Arduino board that you will be using in every Arduino program. If you have any experience with programming you’re most likely familiar with the concept of variables, but we will have a brief reminder just in case you’re not.

A Variable is like a box where you can store information, if you’re trying to store the value from a sensor for example you would put into a variable.

A Variable needs four things, a ***type, name, equal sign and a value*** that you can actually store into the variable.
type name = value; //Declaration and initialization

The type represents the data type, whether it’s a number, character, integer etc. It’s basically the kind of information you will be storing. There’s a bunch of data types below is some of these types.

![alt text](VariableTypes.png)

The name of the variable is how you would like to refer to it in your code, variable names can contain letters, numbers and underscores but they can’t start with a number.

The equal sign is the assignment operator it basically means you take the value you have and store into your variable.

Note: When you declare a variable, you can use it in your code just by the name.

type name;
name = value;

### *Sketch Examples 1*
In the Arduino IDE you can find some basic Arduino sketched that we’re gonna be using to develop a better understanding on how to program an Arduino Board. 

First of all you can find these programs by going to ***File>Examples>Basics.***

![alt text](Basic%20Programs.png)

- **The Fade Sketch:**

The first program we will be looking into is the “Fade” program, where an LED is gradually fading using the PWM pins on an Arduino previously explained.

```
int led = 9;         // the PWM pin the LED is attached to
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

```
- Declaring variables:
    - `led = 9;` → The LED is connected to **pin 9** on the Arduino.
    - `brightness = 0;` → This variable controls how bright the LED is.
    - `fadeAmount = 5;` → This determines how much the brightness increases or decreases with each loop.
- Setup Function:
    - `pinMode(led, OUTPUT);` → This tells the Arduino that **pin 9** will be used as an **output**, meaning it will send signals (not receive them).
- Loop Function:
    - Set the LED Brightness:
        - `analogWrite(pin, value);` is used to **send a PWM signal** to a pin.
        - PWM (**Pulse Width Modulation**) allows us to **control brightness** instead of just turning the LED on/off.
        - The value of `brightness` ranges from **0 (OFF)** to **255 (fully ON)**.
    - Increase Brightness:
        - `brightness = brightness + fadeAmount;` Every time the loop runs, brightness increases by `fadeAmount` (5).
        - This makes the LED **gradually brighter**.
    - Reverse Direction at the Brightness Limits:
        - `if (brightness <= 0 || brightness >= 255) {fadeAmount = -fadeAmount;}` If the brightness reaches **0 (fully OFF)** or **255 (fully ON)**, the direction of fading **reverses**.
        
        - `fadeAmount = -fadeAmount;` → This **flips** the value of `fadeAmount`:
            - If it was `+5`, it becomes `5` (LED starts dimming).
            - If it was `5`, it becomes `+5` (LED starts brightening).
    - `delay(30);` Wait for a Short time

- **The LCD Sketch**

In this program we will attach an LCD display to our board and display whatever message we want. Below is the code used.

```cpp
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Dima Raja");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}
```

- Declaring Variables:
    - `#include <LiquidCrystal.h>;` → This **includes the LiquidCrystal library**, which allows us to control an **LCD screen**.
    - `const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;`
        - These are the **pin connections** between the **Arduino and the LCD module**:
        - `rs = 12;` → **Register Select (RS)** pin is connected to **pin 12**.
        - `en = 11;` → **Enable (E)** pin is connected to **pin 11**.
        - `d4 = 5;`, `d5 = 4;`, `d6 = 3;`, `d7 = 2;` → These are **data pins** used for sending commands to the LCD.
    - `LiquidCrystal lcd(rs, en, d4, d5, d6, d7);`
        - This **creates an LCD object** named `lcd` and assigns the pin connections to it.
        - The `lcd` object will be used to control the LCD screen.
- Setup Function:
    - `lcd.begin(16, 2);`
        - This **initializes the LCD** with **16 columns** and **2 rows**.
        - Most LCDs use this **16x2 format**.
    - `lcd.print("Dima Raja");`
        - This **prints the text "Dima Raja"** on the LCD **at the default position (top-left corner)**.
        - The message remains on the screen until something new is displayed.
- Loop Function (Runs Continuously):
    - `lcd.setCursor(0, 1);`
        - This **moves the cursor to column 0, row 1** (second row of the LCD).
        - **Why?** Because LCD rows are indexed from `0` (first row) and `1` (second row).
    - `lcd.print(millis() / 1000);`
        - `millis()` returns the **time in milliseconds** since the Arduino was powered on.
        - `millis() / 1000;` converts this **from milliseconds to seconds**.
        - This makes the LCD **display the number of seconds** since the Arduino started.   

## How to Use Control Structures

### *What are Control Structures*

When you write a program, it typically executes line by line—the first line runs, then the second, then the third, and so on.

However, in more complex code, you may need to control the flow of execution. You might want to **skip** certain lines, **repeat** a set of instructions multiple times, or execute specific lines **only when a condition is met**. This is where **Control Structures** come in.

Control Structures allow you to **manage the flow of your program**, determining the order in which lines of code are executed. They achieve this using **conditions, loops, or specific instructions**, ensuring your code runs efficiently and logically.

In Arduino programming, control structures are essential for managing how code executes on the microcontroller. 

The main types of control structures in Arduino Programming are:

1.  **Sequential Execution**
    - This is the default behavior of a code, where instructions run one after another in the order they are written.
2. **Conditional Statements (Decision-Making)**
    - These allow the program to execute different blocks of code based on conditions. The most common ones are `if`, `if-else`, and `switch-case`.
    - For example, we previously used an if statement in our **fade program**:
        
        ```arduino
        if (brightness <= 0 || brightness >= 255) {
            fadeAmount = -fadeAmount;
          }
        ```
        
        In this code, the fadeAmount variable is set to its negative value, **only** **if** the brightness goes below 0 **or** (`||`) above 255. This ensure that the line of code `fadeAmount = -fadeAmount;` is executed **only when** the condition `brightness <= 0 || brightness >= 255` is met.
        
3. **Loops (Iteration Structures)**
    - Loops help execute a block of code multiple times, either for a fixed number of iterations (`for` loop) or until a condition is met (`while` and `do-while` loops).
    - Example (`for` loop):
        
        ```cpp
        for (int i = 0; i < 5; i++) {
          Serial.print("Iteration: ");
          Serial.println(i);
          delay(500);
        }
        ```
        
        In this example, the loop runs **5 times**. The variable `i` starts at `0`, increments by `1` on each iteration (`i++`), and stops once it reaches `5`. Each time the loop runs, the current value of `i` is printed, followed by a **500ms delay** before the next iteration.
        
    - Example (`while` loop):
        
        ```cpp
        int count = 0;
        while (count < 3) {
          Serial.println("Looping...");
          count++;
          delay(500);
        }
        ```
        
        Here, the loop **keeps running** as long as `count` is less than `3`. On each iteration, `"Looping..."` is printed, `count` increases by `1`, and there's a **500ms delay** before checking the condition again. Once `count` reaches `3`, the loop stops executing.
        
4. **Jump Statements (Branching)**
    - **Jump statements** alter the normal flow of execution by skipping or stopping certain parts of the code. In Arduino programming, we use `break`, `continue`, and `return` to control how loops and functions behave.
    - **Example (`break` in a loop):**
        
        ```cpp
        for (int i = 0; i < 10; i++) {
          if (i == 5) {
            break; // Stops the loop when i reaches 5
          }
          Serial.println(i);
        }
        ```
        
        In this example, the loop starts at `i = 0` and runs until `i < 10`. However, when `i` reaches `5`, the `break` statement **immediately stops the loop**, preventing any further iterations. As a result, only numbers **0 to 4** are printed.
        
    - **Example (`continue` to skip an iteration):**
        
        ```cpp
        for (int i = 0; i < 5; i++) {
          if (i == 2) {
            continue; // Skips iteration when i is 2
          }
          Serial.println(i);
        }
        ```
        
        Here, the loop prints numbers **0 to 4**, but when `i == 2`, the `continue` statement **skips that iteration**, meaning `2` is never printed. The loop then continues with the next value of `i`.         
        
### *Sketch Examples 2*


