#include <Arduino.h>
#include <TM1637Display.h>

// TM1637 Module Pin
#define CLK 2
#define DIO 3

// Traffic Light Module Pin
#define R 4
#define Y 5
#define G 6

#define delayTime 3000
#define delayTimeFast 500
int redCount = 30;
int greenCount = 20;


TM1637Display display(CLK, DIO);

void setup(){
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop(){
  if(redCount <= 30 && redCount >= 0){
    digitalWrite(R, HIGH); // on
    display.setBrightness(7); // 0(lowest) - 7(highest)
    red();
  }
  if(redCount <= 30 && redCount == 0){
    delay(delayTime);
    digitalWrite(R, LOW); // off
    delay(delayTimeFast);
    digitalWrite(Y, HIGH); // on
    delay(delayTime);
    digitalWrite(Y, LOW); // off
    delay(delayTimeFast);
  }
  if(greenCount <= 20 && greenCount >=0){
    digitalWrite(G, HIGH); // on
    display.setBrightness(7); // 0(lowest) - 7(highest)
    green();
  }
  digitalWrite(G, LOW); // off
  delay(delayTime);
}

void red(){
  // Show decimal numbers with/without leading zeros
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

void green(){
  // Show decimal numbers with/without leading zeros
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
