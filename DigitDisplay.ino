/*
  Seven Segment Decimal Counting

  This file contains the controller program to 
  control 2 seven digit displays each connected
  to pins 22 - 29 and 32 - 39 respectively

Important Functions

  void initializeDisplay() - Initializes pin mode and sets
  the value to 00

  void updateDisplay(byte n, byte m) - The n is for the
  10s place and the m is for the ones place
  Passing 255 clears all segments, any other values
  turns on all the segments

  Created May 17 2024
  by Reegan Anto.J 3rd year 
  Adhi College of Engineering and Technology
*/

enum lightPinTens{
  t_a = 22, t_b = 23, t_c = 24, t_d = 25, t_e = 26, t_f = 27, t_g = 28, t_dp = 29
};
enum lightPinOnes{
  o_a = 32, o_b = 33, o_c = 34, o_d = 35, o_e = 36, o_f = 37, o_g = 38, o_dp =  39
};

void UpdateDisplay(byte n, byte m){
  switch(n){
    case 255:
      digitalWrite(t_a, LOW);
      digitalWrite(t_b, LOW);
      digitalWrite(t_c, LOW);
      digitalWrite(t_d, LOW);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, LOW);
      digitalWrite(t_g, LOW);
      digitalWrite(t_dp, LOW);
    case 0:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, HIGH);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, LOW);
      digitalWrite(t_dp, LOW);
      break;
    case 1:
      digitalWrite(t_a, LOW);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, LOW);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, LOW);
      digitalWrite(t_g, LOW);
      digitalWrite(t_dp, LOW);
      break;
    case 2:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, LOW);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, HIGH);
      digitalWrite(t_f, LOW);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 3:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, LOW);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 4:
      digitalWrite(t_a, LOW);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, LOW);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 5:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, LOW);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 6:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, LOW);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, HIGH);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 7:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, LOW);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, LOW);
      digitalWrite(t_g, LOW);
      digitalWrite(t_dp, LOW);
      break;
    case 8:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, HIGH);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    case 9:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, LOW);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, LOW);
      break;
    default:
      digitalWrite(t_a, HIGH);
      digitalWrite(t_b, HIGH);
      digitalWrite(t_c, HIGH);
      digitalWrite(t_d, HIGH);
      digitalWrite(t_e, HIGH);
      digitalWrite(t_f, HIGH);
      digitalWrite(t_g, HIGH);
      digitalWrite(t_dp, HIGH);
  }

  switch(m){
    case 255:
      digitalWrite(o_a, LOW);
      digitalWrite(o_b, LOW);
      digitalWrite(o_c, LOW);
      digitalWrite(o_d, LOW);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, LOW);
      digitalWrite(o_g, LOW);
      digitalWrite(o_dp, LOW);
    case 0:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, HIGH);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, LOW);
      digitalWrite(o_dp, LOW);
      break;
    case 1:
      digitalWrite(o_a, LOW);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, LOW);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, LOW);
      digitalWrite(o_g, LOW);
      digitalWrite(o_dp, LOW);
      break;
    case 2:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, LOW);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, HIGH);
      digitalWrite(o_f, LOW);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 3:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, LOW);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 4:
      digitalWrite(o_a, LOW);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, LOW);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 5:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, LOW);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 6:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, LOW);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, HIGH);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 7:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, LOW);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, LOW);
      digitalWrite(o_g, LOW);
      digitalWrite(o_dp, LOW);
      break;
    case 8:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, HIGH);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    case 9:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, LOW);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, LOW);
      break;
    default:
      digitalWrite(o_a, HIGH);
      digitalWrite(o_b, HIGH);
      digitalWrite(o_c, HIGH);
      digitalWrite(o_d, HIGH);
      digitalWrite(o_e, HIGH);
      digitalWrite(o_f, HIGH);
      digitalWrite(o_g, HIGH);
      digitalWrite(o_dp, HIGH);
  }
}

void InitializeDisplay(){
    for(byte i = 22; i<=29; i++) pinMode(i, OUTPUT);
    for(byte i = 32; i<=39; i++) pinMode(i, OUTPUT);
    UpdateDisplay(0,0);
  }