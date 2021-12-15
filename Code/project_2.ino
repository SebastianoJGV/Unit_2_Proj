// PROJECT  : Unit 2 Clock
// PURPOSE  : Create a clock that counts in a number system other than roman characters, 
//	      And incorporates a second sense
// COURSE   : IB Computer Sciences
// AUTHOR   : Sebastiano Giannelli Viscardi, Elia Kobayashi, Su Thiri Kyaw
// DATE     : 2021-12-01 to 2021-12-18
// MCU      : ATMEGA328p with Arduino Uno Rev3
// STATUS   : Operational, needs AM/PM seperation

//Rows 
#define R1 9
#define R2 8
#define R3 7
#define R4 6
#define R5 5
#define R6 4
#define R7 3
#define R8 2
//Columns
#define C1 10
#define C2 11
#define C3 12
#define C4 13
#define C5 A0
#define C6 A1
#define C7 A2
#define C8 A3

//Current Time
uint8_t current = 0;

//Bitmaps for each kanji character

  int jap1 [8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap2[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap3[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
 int jap4[8][8] = {
    {1,1,1,1,1,1,1,1},
    {1,0,1,0,0,1,0,1},
    {1,0,1,0,0,1,0,1},
    {1,0,1,0,0,1,1,1},
    {1,1,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1},
 }; 
  int jap5[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,1,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,1,0,0,1,0,0},
    {0,0,1,0,0,1,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap6[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,1,0,0,1,0,0},
    {0,1,0,0,0,0,1,0},
    {1,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap7[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0},
    {0,0,1,0,1,1,0,0},
    {0,0,1,1,0,0,1,0},
    {1,1,1,0,0,0,0,0},
    {0,0,1,0,0,1,0,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap8[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,1,1,1,0,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,1,1,0,0,1,1,0},
    {0,1,0,0,0,0,1,0},
    {0,1,0,0,0,0,1,1},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap9[8] [8] = {
    {0,0,0,1,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,1,0,1,0,0},
    {0,0,1,1,0,1,0,0},
    {0,0,1,0,0,1,0,0},
    {0,1,1,0,0,1,0,1},
    {0,1,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap10[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap11[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {1,1,1,0,1,1,1,1},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 
  int jap12[8] [8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,1,1,0},
    {1,1,1,0,0,0,0,0},
    {0,1,0,0,1,1,1,1},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  }; 

void setup() { //Serial simply for testing, all pins are setup for matrix, along with buzzer and button
  Serial.begin(9600);
   pinMode(R1, OUTPUT);
   pinMode(R2, OUTPUT);
   pinMode(R3, OUTPUT);
   pinMode(R4, OUTPUT);
   pinMode(R5, OUTPUT);
   pinMode(R6, OUTPUT);
   pinMode(R7, OUTPUT);
   pinMode(R8, OUTPUT);
   pinMode(C1, OUTPUT);
   pinMode(C2, OUTPUT);
   pinMode(C3, OUTPUT);
   pinMode(C4, OUTPUT);
   pinMode(C5, OUTPUT);
   pinMode(C6, OUTPUT);
   pinMode(C7, OUTPUT);
   pinMode(C8, OUTPUT);


  digitalWrite(R1,HIGH); //All pins are inverted, so as to clear the matrix
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  digitalWrite(R6,HIGH);
  digitalWrite(R7,HIGH);
  digitalWrite(R8,HIGH);
  digitalWrite(C1,LOW);
  digitalWrite(C2,LOW);
  digitalWrite(C3,LOW);
  digitalWrite(C4,LOW);
  digitalWrite(C5,LOW);
  digitalWrite(C6,LOW);
  digitalWrite(C7,LOW);
  digitalWrite(C8,LOW);
  digitalWrite(A4,LOW);
  
  pinMode(A5, INPUT); //Button and control for buzzer
  pinMode(A4, OUTPUT);
}


void SelectRow(int row){ 
  //used with for loop to itterate through rows
  //If row not selected, it is empty
  if (row==1) digitalWrite(R1,LOW); else digitalWrite(R1,HIGH);
  if (row==2) digitalWrite(R2,LOW); else digitalWrite(R2,HIGH);
  if (row==3) digitalWrite(R3,LOW); else digitalWrite(R3,HIGH);
  if (row==4) digitalWrite(R4,LOW); else digitalWrite(R4,HIGH);
  if (row==5) digitalWrite(R5,LOW); else digitalWrite(R5,HIGH);
  if (row==6) digitalWrite(R6,LOW); else digitalWrite(R6,HIGH);
  if (row==7) digitalWrite(R7,LOW); else digitalWrite(R7,HIGH);
  if (row==8) digitalWrite(R8,LOW); else digitalWrite(R8,HIGH);
}

void Set_LED_in_Active_Row(int column, int state){
  //Itterate through column, to find which LED should be on
  if (column==1) digitalWrite(C1,state); 
  if (column==2) digitalWrite(C2,state); 
  if (column==3) digitalWrite(C3,state); 
  if (column==4) digitalWrite(C4,state); 
  if (column==5) digitalWrite(C5,state); 
  if (column==6) digitalWrite(C6,state); 
  if (column==7) digitalWrite(C7,state); 
  if (column==8) digitalWrite(C8,state); 
}

void Clear(){ //Clears board
    int state = 0;
  for (int l=2; l<10; l++){//Counts through and writes all rows high
      digitalWrite(l, HIGH);
    }
  for (int k=1;k<9;k++){//Sets all columns off
    Set_LED_in_Active_Row(k, 0);
  }
    
}
  

void loop() {
  current++;//integer that counts current time
  if(current>13){current=0;} //if time is past 12, go back to 1
    
  for (int time=0;time<100;time++){//Decides how much time between itterations
    for (int j=0;j<8;j++){//Count through each row from 0-8
    Clear();//Clear matrix
    SelectRow(j+1);//Select the next row
      for (int i=0;i<8;i++){//For loop to count through columns
        switch(current){//Switch case corresponding to each bitmap
          case 1:
          Set_LED_in_Active_Row(i+1 ,jap1[j][i]);
          break;
          
          case 2:
          Set_LED_in_Active_Row(i+1 ,jap2[j][i]);
          break;
          
          case 3:
          Set_LED_in_Active_Row(i+1 ,jap3[j][i]);
          break;
          
          case 4:
          Set_LED_in_Active_Row(i+1 ,jap4[j][i]);
          break;
          
          case 5:
          Set_LED_in_Active_Row(i+1 ,jap5[j][i]);
          break;
          
          case 6:
          Set_LED_in_Active_Row(i+1 ,jap6[j][i]);
          break;
          
          case 7:
          Set_LED_in_Active_Row(i+1 ,jap7[j][i]);
          break;
          
          case 8:
          Set_LED_in_Active_Row(i+1 ,jap8[j][i]);
          break;
          
          case 9:
          Set_LED_in_Active_Row(i+1 ,jap9[j][i]);
          break;
          
          case 10:
          Set_LED_in_Active_Row(i+10,jap10[j][i]);
          break;
          
          case 11:
          Set_LED_in_Active_Row(i+1 ,jap11[j][i]);
          break;
 
          case 12:
          Set_LED_in_Active_Row(i+1 ,jap12[j][i]);
          break;
        }
      }
      delay(2);
    }
	if(digitalRead(A5)==HIGH){ //If the button is pressed, play buzzer based off of time
  		for(int i=0; i<current; i++){
     		digitalWrite(A4, HIGH);
      	 	delay(500);
  			digitalWrite(A4, LOW);
  			delay(500);
    		//Serial.print("counted"); //Test code, can be ommitted
   			}
   	 	}
	}
}
  
