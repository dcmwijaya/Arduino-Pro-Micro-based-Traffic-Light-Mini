// library initialization
#include <Arduino.h> // calls a library called Arduino
#include <TM1637Display.h> // calls a library called TM1637Display

// TM1637 Module Pin
#define CLK 2
#define DIO 3

// Traffic Light Module Pin
#define R 4
#define Y 5
#define G 6

// variable initialization
#define delayTime 3000
#define delayTimeFast 500
int redCount = 30;
int greenCount = 20;

// object initialization
TM1637Display display(CLK, DIO);

// Method: setup
void setup(){
  pinMode(R, OUTPUT); // R pin is used as an output -> RED
  pinMode(Y, OUTPUT); // Y pin is used as an output -> YELLOW
  pinMode(G, OUTPUT); // G pin is used as an output -> GREEN
}

// Method: loop
void loop(){
  if(redCount <= 30 && redCount >= 0){ // if at a red light the countdown range starts from 30 and has not reached 0, then during the countdown what will happen is :
    digitalWrite(R, HIGH); // RED -> ON
    display.setBrightness(7); // 0(lowest) - 7(highest)
    red(); // calling the red method
  }
  if(redCount <= 30 && redCount == 0){ // if at the red light the countdown range has reached 0, then what will happen is :
    delay(delayTime); // delay -> 3 second
    digitalWrite(R, LOW); // RED -> OFF
    delay(delayTimeFast); // delay -> 0,5 second
    digitalWrite(Y, HIGH); // YELLOW -> ON
    delay(delayTime); // delay -> 3 second
    digitalWrite(Y, LOW); // YELLOW -> OFF
    delay(delayTimeFast); // delay -> 0,5 second
  }
  if(greenCount <= 20 && greenCount >=0){
    digitalWrite(G, HIGH); // GREEN -> ON
    display.setBrightness(7); // 0(lowest) - 7(highest)
    green(); // calling the green method
  }
  digitalWrite(G, LOW); // GREEN -> OFF
  delay(delayTime); // delay -> 3 second
}

// Method: red
void red(){
  for (redCount=30; redCount>=10; redCount--){
    display.showNumberDec(redCount, false, 2, 1);
    delay(delayTime);
    display.clear();
  }
  for (redCount=9; redCount>=1; redCount--){
    display.showNumberDec(redCount, true, 2, 1);
    delay(delayTime);
    display.clear();
  }
  display.showNumberDec(0, true, 2, 1);
}

// Method: green
void green(){
  for (int greenCount=20; greenCount>=10; greenCount--){
    display.showNumberDec(greenCount, false, 2, 1);
    delay(delayTime);
    display.clear();
  }
  for (int greenCount=9; greenCount>=1; greenCount--){
    display.showNumberDec(greenCount, true, 2, 1);
    delay(delayTime);
    display.clear();
  }
  display.showNumberDec(0, true, 2, 1);
}
