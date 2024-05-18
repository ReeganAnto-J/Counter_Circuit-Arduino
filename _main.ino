/*
  Digital Adder Circuit

  This is a simple micro-project which is a combination
  of a binary counter which is presented using LEDs and a 
  decimal counter which is presented with 2 seven segment 
  displays

  Components used:
    Arduino MEGA
    4x LEDs
    6x 330 Ohm resistors
    1 NO push button
    2x 7 segment displays

  This is the driver file for this project, other functions are
  explained in their respective files

  Created May 17 2024
  by Reegan Anto.J 3rd year 
  Adhi College of Engineering and Technology
*/

void CounterInitialization();
void BinaryCounter();
void UpdateDisplay(byte n, byte m);
void InitializeDisplay();

byte counter;
bool buttonReleased;

void setup() {
  // put your setup code here, to run once:
  CounterInitialization();
  InitializeDisplay();

  pinMode(13, INPUT);

  counter = 0;
  buttonReleased = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(counter > 15) counter = 0;
  if(digitalRead(13) == HIGH){
    delay(50);
    if(digitalRead(13) == HIGH){
      if(buttonReleased){
        counter++;
        BinaryCounter();
        buttonReleased = false;
      }
    }
  }
  if(digitalRead(13) == LOW){
    delay(50);
    if(digitalRead(13) == LOW) buttonReleased = true;
  }
  if(counter < 10) UpdateDisplay(0, counter);
  else UpdateDisplay(counter/10, counter%10);
}
