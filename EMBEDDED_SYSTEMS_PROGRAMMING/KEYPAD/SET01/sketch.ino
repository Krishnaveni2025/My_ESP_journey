//03 Perform Single Digit Addition
//Ex: 6 + 7 = 13, 9 + 4 = 13
//04 Perform Two Digit Addition
//Ex: 61 + 72 = 133, 19 + 42 = 61
//05 Perform three Digit Addition.
//Ex: 161 + 656 = 817 659 + 765 = 1424
//06 Perform any digit Addition. If the total exceeds 9999 then display “EEEE”
//Ex: 1561 + 2 = 1563, 8765 + 987 = 9752
//07 Perform any digit Subtraction. If the total exceeds 9999 then display “EEEE”. Display Negative result also.
//Ex: 1561 - 2 = 1559, 765 - 987 = -22
//08 Perform any digit Multiplication. If the total exceeds 9999 then display “EEEE”.
//Ex: 25 x 40 = 1000, 1111 x 8 = 8888
//09 Perform any digit Division. Display only Quotient.
//Ex: 1561 / 6 = 260, 765 / 9 = 85
//10 Perform any digit Division. Display only Remainder.
//Ex: 1561 / 6 = 1, 765 / 9 = 0
#include"ECEN.h"
void setup() {
volatile int Number1=0,sec=60,Switch=0,counter1=0,counter2=0,Number2=0,Number3=0,x=0,clear=0;// Declaration of Required Variables
volatile int outputmodeF=0xff,outputmodeK=0x0f,outputmodeA=0xff,outputmodeC=0x00; // Initialaization of input and output modes
volatile int add=0,sub=0,mul=0,rem=0,div=0,displayNumber=0;
init_portF(outputmodeF);// Initialization of Port F
init_portK(outputmodeK); // Initialization of Port K
init_portA(outputmodeA); // Initialization of Port A
init_portC(outputmodeC); // Initialization of Port C
while(1)
{
    Switch=Read_KeyPadSwitch(); // Reading Switch
   if((counter1==0 ) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    Number1=Switch; // stroing number
    displayNumber=Number1; // copying number to variable displayNumber;
    counter1++;//increment the counter
  } 
  else if((Switch==14) && (counter2==2 || counter2==3 || counter2==4 || counter2==5))
 {
  if(add==1)
  {
  displayNumber=Number1+Number2;
  Display4(displayNumber);
  counter1=0;
  counter2=0;
   clear=1;
   add=0;
  }
  else if(sub==2)
  {
     displayNumber=Number1-Number2;
  Display4(displayNumber);
  counter1=0;
  counter2=0;
   clear=1;
   sub=0;
  }
  else if(mul==3)
  {
     displayNumber=Number1*Number2;
  Display4(displayNumber);
  counter1=0;
  counter2=0;
   clear=1;
   mul=0;
  }
    else if(div==4)
  {
     displayNumber=Number1/Number2;
  Display4(displayNumber);
  counter1=0;
  counter2=0;
   clear=1;
   div=0;
  }
  else if(rem==5)
  {
     displayNumber=Number1%Number2;
  Display4(displayNumber);
  counter1=0;
  counter2=0;
   clear=1;
   rem=0;
  }
 }
 else if(Switch==10)
  {
    add=1;
    counter2++;
    counter1=-1;
  }
   else if(Switch==11)
  {
    sub=2;
    counter2++;
    counter1=-1;
  }
  else if(Switch==12)
  {
    mul=3;
    counter2++;
    counter1=-1;
  }
   else if(Switch==15)
  {
    div=4;
    counter2++;
    counter1=-1;
  }
  else if(Switch==13)
  {
    rem=5;
    counter2++;
    counter1=-1;
  }
 else if((counter1==1) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter1++;
     Number1=Number1*10+Switch;
     displayNumber=Number1;
  }
   else if((counter1==2) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter1++;
     Number1=Number1*10+Switch;
     displayNumber=Number1;
  }
     else if((counter1==3) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter1++;
     Number1=Number1*10+Switch;
     displayNumber=Number1;
  }
  else if((counter2==1) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter2++;
     Number2=Switch;
     displayNumber=Number2;
  }
    else if((counter2==2) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter2++;
     Number2=Number2*10+Switch;
     displayNumber=Number2;
  }
      else if((counter2==3) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter2++;
     Number2=Number2*10+Switch;
     displayNumber=Number2;
  }
  else if((counter2==4) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
  {
    counter2++;
     Number2=Number2*10+Switch;
     displayNumber=Number2;
  }
else if((clear==1) && (Switch==1 || Switch==0 || Switch==2 || Switch==3 || Switch==4 || Switch==5 || Switch==6 || Switch==7 || Switch==8 || Switch==9))
 {
    Number1=Switch;
    displayNumber=Number1;
    Number2=0;
    counter1=1;
    counter2=0;
    clear=0;
 }
 else
 {
  Display4(displayNumber);
 }
   
}
}
void loop() {
 }