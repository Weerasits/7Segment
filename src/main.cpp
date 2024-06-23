#include <Arduino.h>
// 7 Segment Digit 1 Variable
int A_L0 = 40; 
int B_L0 = 39; 
int C_L0 = 38; 
int D_L0 = 37; 
int E_L0 = 36; 
int F_L0 = 35; 
int G_L0 = 34; 
// 7 Segment Digit 2 Variable
int A_L1 = 47; 
int B_L1 = 46;
int C_L1 = 45;
int D_L1 = 44;
int E_L1 = 43;
int F_L1 = 42;
int G_L1 = 41; 
// 7 Segment Digit 3 Variable
int A_R0 = 18;
int B_R0 = 17;
int C_R0 = 16;
int D_R0 = 15;
int E_R0 = 14;
int F_R0 = 4;
int G_R0 = 5;
// 7 Segment Digit 4 Variable
int A_R1 = 25;
int B_R1 = 24;
int C_R1 = 23;
int D_R1 = 22;
int E_R1 = 21;
int F_R1 = 20;
int G_R1 = 19;

int i; // Variable for Count

// Varible for ButtonRead
int L_up_btn ; 
int L_down_btn ;
int R_up_btn;
int R_down_btn ;

// Boolean for button Stage
bool L_up_btn_s = false;
bool L_down_btn_s = false;
bool R_up_btn_s = false;
bool R_down_btn_s = false;

// Variable for Display
int digit1Num = 0;
int digit2Num = 0;
int digit3Num = 0;
int digit4Num = 0;

void setup() {
  Serial.begin(9600); // Start Serial port
  i = 47;
  while (i >= 34){
    pinMode(i,OUTPUT); // PinMode IO 47 to 34
    digitalWrite(i,0); // Write LOW on i
    i--; // Decrease i
  }

  i = 25;
  while (i >= 14){
    pinMode(i,OUTPUT);
    digitalWrite(i,0);
    i--;
  }

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(4,0);
  digitalWrite(5,0);

  pinMode(7,INPUT_PULLUP); // L _UP
  pinMode(8,INPUT_PULLUP); // L DOwn
  pinMode(9,INPUT_PULLUP); // R Up
  pinMode(10,INPUT_PULLUP); // R Down

  delay(2000);
  // Off all Digit
  i = 47;
  while (i >= 34){
    digitalWrite(i,1);
    i--;
  }

  i = 25;
  while (i >= 14){
    pinMode(i,OUTPUT);
    digitalWrite(i,1);
    i--;
  }
  digitalWrite(4,1);
  digitalWrite(5,1);

  delay(1000);
}
void L0_Display_0(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,0);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,1);
}
void L0_Display_1(){
  digitalWrite(A_L0,1);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,1);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,1);
  digitalWrite(G_L0,1);
}
void L0_Display_2(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,1);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,0);
  digitalWrite(F_L0,1);
  digitalWrite(G_L0,0);
}
void L0_Display_3(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,1);
  digitalWrite(G_L0,0);
}
void L0_Display_4(){
  digitalWrite(A_L0,1);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,1);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,0);
}
void L0_Display_5(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,1);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,0);
}
void L0_Display_6(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,1);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,0);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,0);
}
void L0_Display_7(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,1);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,1);
}
void L0_Display_8(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,0);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,0);
}
void L0_Display_9(){
  digitalWrite(A_L0,0);
  digitalWrite(B_L0,0);
  digitalWrite(C_L0,0);
  digitalWrite(D_L0,0);
  digitalWrite(E_L0,1);
  digitalWrite(F_L0,0);
  digitalWrite(G_L0,0);
}

void L1_Display_0(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,0);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,1);
}
void L1_Display_1(){
  digitalWrite(A_L1,1);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,1);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,1);
  digitalWrite(G_L1,1);
}
void L1_Display_2(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,1);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,0);
  digitalWrite(F_L1,1);
  digitalWrite(G_L1,0);
}
void L1_Display_3(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,1);
  digitalWrite(G_L1,0);
}
void L1_Display_4(){
  digitalWrite(A_L1,1);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,1);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,0);
}
void L1_Display_5(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,1);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,0);
}
void L1_Display_6(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,1);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,0);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,0);
}
void L1_Display_7(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,1);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,1);
}
void L1_Display_8(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,0);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,0);
}
void L1_Display_9(){
  digitalWrite(A_L1,0);
  digitalWrite(B_L1,0);
  digitalWrite(C_L1,0);
  digitalWrite(D_L1,0);
  digitalWrite(E_L1,1);
  digitalWrite(F_L1,0);
  digitalWrite(G_L1,0);
}



// R Display

void R0_Display_0(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,0);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,1);
}
void R0_Display_1(){
  digitalWrite(A_R0,1);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,1);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,1);
  digitalWrite(G_R0,1);
}
void R0_Display_2(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,1);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,0);
  digitalWrite(F_R0,1);
  digitalWrite(G_R0,0);
}
void R0_Display_3(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,1);
  digitalWrite(G_R0,0);
}
void R0_Display_4(){
  digitalWrite(A_R0,1);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,1);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,0);
}
void R0_Display_5(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,1);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,0);
}
void R0_Display_6(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,1);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,0);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,0);
}
void R0_Display_7(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,1);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,1);
}
void R0_Display_8(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,0);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,0);
}
void R0_Display_9(){
  digitalWrite(A_R0,0);
  digitalWrite(B_R0,0);
  digitalWrite(C_R0,0);
  digitalWrite(D_R0,0);
  digitalWrite(E_R0,1);
  digitalWrite(F_R0,0);
  digitalWrite(G_R0,0);
}

void R1_Display_0(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,0);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,1);
}
void R1_Display_1(){
  digitalWrite(A_R1,1);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,1);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,1);
  digitalWrite(G_R1,1);
}
void R1_Display_2(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,1);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,0);
  digitalWrite(F_R1,1);
  digitalWrite(G_R1,0);
}
void R1_Display_3(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,1);
  digitalWrite(G_R1,0);
}
void R1_Display_4(){
  digitalWrite(A_R1,1);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,1);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,0);
}
void R1_Display_5(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,1);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,0);
}
void R1_Display_6(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,1);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,0);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,0);
}
void R1_Display_7(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,1);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,1);
}
void R1_Display_8(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,0);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,0);
}
void R1_Display_9(){
  digitalWrite(A_R1,0);
  digitalWrite(B_R1,0);
  digitalWrite(C_R1,0);
  digitalWrite(D_R1,0);
  digitalWrite(E_R1,1);
  digitalWrite(F_R1,0);
  digitalWrite(G_R1,0);
}

// Condition to display Num

void Displaydigit1Num(){
  switch (digit1Num)
  {
  case 0:
    L0_Display_0();
    break;
  case 1:
    L0_Display_1();
    break;
  case 2:
    L0_Display_2();
    break;
  case 3:
    L0_Display_3();
    break;
  case 4:
    L0_Display_4();
    break;
  case 5:
    L0_Display_5();
    break;
  case 6:
    L0_Display_6();
    break;
  case 7:
    L0_Display_7();
    break;
  case 8:
    L0_Display_8();
    break;
  case 9:
    L0_Display_9();
    break;
  default:
    L0_Display_0();
    break;
  }
}
void Displaydigit2Num(){
  switch (digit2Num)
  {
  case 0:
    L1_Display_0();
    break;
  case 1:
    L1_Display_1();
    break;
  case 2:
    L1_Display_2();
    break;
  case 3:
    L1_Display_3();
    break;
  case 4:
    L1_Display_4();
    break;
  case 5:
    L1_Display_5();
    break;
  case 6:
    L1_Display_6();
    break;
  case 7:
    L1_Display_7();
    break;
  case 8:
    L1_Display_8();
    break;
  case 9:
    L1_Display_9();
    break;
  default:
    L1_Display_0();
    break;
  }
}
void Displaydigit3Num(){
  switch (digit3Num)
  {
  case 0:
    R0_Display_0();
    break;
  case 1:
    R0_Display_1();
    break;
  case 2:
    R0_Display_2();
    break;
  case 3:
    R0_Display_3();
    break;
  case 4:
    R0_Display_4();
    break;
  case 5:
    R0_Display_5();
    break;
  case 6:
    R0_Display_6();
    break;
  case 7:
    R0_Display_7();
    break;
  case 8:
    R0_Display_8();
    break;
  case 9:
    R0_Display_9();
    break;
  default:
    break;
  }
}
void Displaydigit4Num(){
  switch (digit4Num)
  {
  case 0:
    R1_Display_0();
    break;
  case 1:
    R1_Display_1();
    break;
  case 2:
    R1_Display_2();
    break;
  case 3:
    R1_Display_3();
    break;
  case 4:
    R1_Display_4();
    break;
  case 5:
    R1_Display_5();
    break;
  case 6:
    R1_Display_6();
    break;
  case 7:
    R1_Display_7();
    break;
  case 8:
    R1_Display_8();
    break;
  case 9:
    R1_Display_9();
    break;
  default:
    break;
  }
}

void loop() {
  L_up_btn = digitalRead(7);
  L_down_btn = digitalRead(8);
  R_up_btn = digitalRead(9);
  R_down_btn = digitalRead(10);

  if(L_up_btn == LOW && L_up_btn_s == false){
    L_up_btn_s = true;
    if(digit2Num == 9){
      digit2Num = 0;
      digit1Num++;
    }else{
      digit2Num++;
    }
  }
  if(L_up_btn == HIGH && L_up_btn_s == true){
    L_up_btn_s = false;   
  }
  if(digit2Num != 0 || digit1Num != 0){ // Not Allow to Press Decrease when num is 00
    if(L_down_btn == LOW && L_down_btn_s == false){
      L_down_btn_s = true;
      if(digit2Num == 0){
        digit2Num = 9;
        digit1Num--;
      }else{
        digit2Num--;
      }
    }
    if(L_down_btn == HIGH && L_down_btn_s == true){
      L_down_btn_s = false;
    }
  }

  //

  if(R_up_btn == LOW && R_up_btn_s == false){
    R_up_btn_s = true;
    if(digit4Num == 9){
      digit4Num = 0;
      digit3Num++;
    }else{
      digit4Num++;
    }
  }
  
  if(R_up_btn == HIGH && R_up_btn_s == true){
    R_up_btn_s = false;   
  }
  
  
  if(digit4Num != 0 || digit3Num != 0){ // Not Allow to Press Decrease when num is 00
    if(R_down_btn == LOW && R_down_btn_s == false){
      R_down_btn_s = true;
      if(digit4Num == 0){
        digit4Num = 9;
        digit3Num--;
      }else{
        digit4Num--;
      }
    }
    if(R_down_btn == HIGH && R_down_btn_s == true){
      R_down_btn_s = false;
    }
  }

  if(R_down_btn == LOW && L_down_btn == LOW){ // Reset When Press both down button!
    delay(1000);
    digit1Num = 0;
    digit2Num = 0;
    digit3Num = 0;
    digit4Num = 0;
  }

  // Display Function
  Displaydigit1Num();
  Displaydigit2Num();
  Displaydigit3Num();
  Displaydigit4Num();

  //Debugging
  Serial.print(digit1Num);
  Serial.print(digit2Num);
  Serial.print(" ");
  Serial.print(digit3Num);
  Serial.println(digit4Num);
}