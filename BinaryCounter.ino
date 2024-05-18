/* 
  Binary Counter

  This is a simple code which counts binary digit to a four
  digit binary number which is represented by pin numbers 
  2 to 5 from 2s digit to 16s digit respectively

  The led turned on denotes a 1 and led turned off denotes
  a 0, using this we can add upto 2^4 which is 16

  The two most nexessary functions are as follows:
    void AdderInitialization() - Must be called first
      as it declares the pin modes

    void BinaryCounter() - Call it each time to increment the 
      values by 1. Resets to 0 when reaches 16

  Created May 16 2024
  by Reegan Anto.J 3rd year 
  Adhi College of Engineering and Technology
*/

const byte p[] = {5, 4, 3, 2}; 
byte adder[] = {0, 0, 0, 0};

inline void lightToZero(){
  for(byte i:p){
    digitalWrite(i, LOW);
  }
}

void BinaryCounter(){ // The core logic of this file
  byte counter = 0;
  for(byte i:adder) if(i == 1) counter++;
  if(counter == 4){
    for(byte i = 0; i<sizeof(adder)/sizeof(byte); i++) adder[i] = 0;
    lightToZero();
    return;
  }
  adder[sizeof(p)/sizeof(byte)-1] += 1;
  for(byte i = sizeof(p)/sizeof(byte); i>0; i--){
    if(adder[i-1] == 2){
      adder[i-1] = 0;
      adder[i-2]+=1;
    }
    else if(adder[i-1] == 3){
      adder[i-1] = 1;
      adder[i-2]+=1;
    }
  }
  for(byte i = 0; i< (sizeof(p)/sizeof(byte)); i++){
    if(adder[i] == 1) digitalWrite(p[i], HIGH);
    else digitalWrite(p[i], LOW);
  }
}

void CounterInitialization(){ //To initialize pinmode 
  for(byte i:p){
    pinMode(i, OUTPUT);
  }
  lightToZero();
}