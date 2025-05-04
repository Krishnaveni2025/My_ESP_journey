volatile int *dirF,*inputF,*outputF,*dirK,*inputK,*outputK,*dirA,*inputA,*outputA,*dirC,*inputC,*outputC;;
volatile int count=0,count1=0;
void init_portF(int x)
{
   dirF=0x30;
   inputF=0x2f;
   outputF=0x31;
   *dirF=x;
}
void init_portK(int x)
{
   dirK=0x107;
   inputK=0x106;
   outputK=0x108;
   *dirK=x;
}
void init_portA(int x)
{
   dirA=0x21;
   inputA=0x20;
   outputA=0x22;
   *dirA=x;
}
void init_portC(int x)
{
   dirC=0x27;
   inputC=0x26;
   outputC=0x28;
   *dirC=x;
}
int DisplayDigit(int digit)
{
             //  0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f
  if(digit==0)
  {
    return 0x3f;
  }
  else if(digit==1)
  {
     return 0x06;
  }
   else if(digit==2)
  {
    return 0x5b;
  }
   else if(digit==3)
  {
    return 0x4f;
  }
   else if(digit==4)
  {
    return 0x66;
  }
   else if(digit==5)
  {
    return 0x6d;
  }
   else if(digit==6)
  {
    return 0x7d;
  }
    else if(digit==7)
  {
    return 0x07;
  }
   else if(digit==8)
  {
    return 0x7f;
  }
    else if(digit==9)
  {
    return 0x6f;
  }
  else if(digit==10)
  {
    return 0x79;
  }
  else if(digit==11)
  {
  return 0x40;
}
}
 /* volatile long i=0,k=0;
  init_portF(outputmodeF);
  init_portK(outputmodeK);
  volatile int cntl[2]={0x02,0x01};
  volatile int Digits[2]={0x4f,0x6d};
  while(i<50)
  {
    *outputK=0x03;
    *outputF=0x00;
    for(k=0;k<2;k++)
    {
    *outputF=Digits[k];
    *outputK=cntl[k];
    delay(10);
    *outputK=0x03;
    }
   i++;
  // *outputF=0x00;
  }*/

  /* for(Number=1;Number<100;Number++)
{
  for(j=1;j<Number;j++)
  {
    Prime=1;
     if(Number%j==0)
     {
      Prime=0;
      break;
     }
     if(Prime==1)
     {
     PrimeNum[J]=Number;
      J++;
     }
  }
}*/

void Display2(int Number)
{
  volatile int outputmodeF=0xff,outputmodeK=0x03,i=0,k=0,Digit1,Digit2;
   init_portF(outputmodeF);
  init_portK(outputmodeK);
  volatile int cntl[2]={0x02,0x01};
  volatile int Digits[2]={0x3f,0x3f};
  if(Number>9)
  {
    Digit1=Number/10;
    Digit2=Number%10;
  }
  else{
    Digit2=Number;
    Digit1=0;
  }
  Digits[0]=DisplayDigit(Digit1);
  Digits[1]=DisplayDigit(Digit2);
  
  while(i<50)
  {
     *outputK=0x03;
    *outputF=0x00;
    for(k=0;k<2;k++)
    {
    *outputF=Digits[k];
    *outputK=cntl[k];
    delay(10);
    *outputK=0x03;
    }
   i++;
   *outputF=0x00;
  }
}
void Display4row()
{
  volatile int outputmodeF=0xff,outputmodeK=0x0f,k=0;
    init_portF(outputmodeF);
  init_portK(outputmodeK);
  volatile int j=0,i=0;
  volatile int cntl[4]={0x0e,0x0d,0x0b,0x07};
  volatile int data[4]={0x3f,0x4f,0x7d,0x07};
  while(j<50)
  {
    *outputK=0x0f;
    *outputF=0x00;
    for(i=0;i<4;i++)
    {
      *outputF=data[i];
    *outputK=cntl[i];
    delay(10);
    *outputK=0x0f;
    }
    j++;
  }
}
void Display4(int Number)
{
  volatile int outputmodeF=0xff,outputmodeK=0x0f;
  volatile int j=0,i=0,Digits[4],Digit1,Digit2,Digit3,Digit4,count=0,Number1;
  volatile int cntl[4]={0x07,0x0b,0x0d,0x0e};
    init_portF(outputmodeF);
  init_portK(outputmodeK);
  Number1=Number;
  
  if(Number1==0)
  {
    count=1;
    Digit1=0;
    
  }
  while(Number1>0)
  {
    Number1=Number1/10;
    count++;
  }
  if(count > 4)
  {
    Digit4=10;
    Digit3=10;
    Digit2=10;
    Digit1=10;
    count=4;
  }
  else if(Number==0)
  {
    count=1;
  }
   else if(Number>999 && Number < 10000)
  {
    Digit4=Number/1000;
    Digit3=(Number/100)%10;
    Digit2=(Number%100)/10;
    Digit1=Number%10;
  }
  else if(Number > 99 && Number < 1000){
    Digit1=Number%10;
    Digit2=(Number/10)%10;
    Digit3=Number/100;
    Digit4=0;
  }
  else if(Number > 9 && Number < 100){
    Digit1=Number%10;
    Digit2=Number/10;
    Digit3=0;
    Digit4=0;
  }
  else if(Number >= 0 && Number < 10)
  {
    Digit1=Number;
    Digit2=0;
    Digit3=0;
    Digit4=0;
  } 
  else if(count>4 || Number > 9999)
  {
    Digit4=10;
    Digit3=10;
    Digit2=10;
    Digit1=10;
  }
  else if(Number1 < -1 && Number1 > -999)
  {
    count=1;
    while(Number1<0)
    {
      Number1=Number1/10;
      count++;
    }
    Number=(Number)*(-1);
    if(count==2)
    {
      Digit1=Number;
      Digit2=11;
    }
    else if(count==3)
    {
      Digit1=Number%10;
      Digit2=Number/10;
      Digit3=11;
    }
    else if(count==4)
    {
       Digit1=Number%10;
    Digit2=(Number/10)%10;
    Digit3=Number/100;
    Digit4=11;
    }
  }
  Digits[0]=DisplayDigit(Digit1);
  Digits[1]=DisplayDigit(Digit2);
  Digits[2]=DisplayDigit(Digit3);
  Digits[3]=DisplayDigit(Digit4);
  while(j<10)
  {
    *outputK=0x0f;
    *outputF=0x00;
    for(i=0;i<count;i++)
    {
      *outputF=Digits[i];
    *outputK=cntl[i];
    *outputK=0x0f;
    }
    j++;
    *outputK=0x0f;
    *outputF=0x00;
  }
}



void Display41(int Number)
{
  volatile int outputmodeF=0xff,outputmodeK=0x03,i=0,k=0,Digit1,Digit2;
   init_portF(outputmodeF);
  init_portK(outputmodeK);
  volatile int cntl[2]={0x0e,0x0d};
  volatile int Digits[2]={0x3f,0x3f};
  if(Number>9)
  {
    Digit1=Number/10;
    Digit2=Number%10;
  }
  else{
    Digit2=Number;
    Digit1=0;
  }
  Digits[0]=DisplayDigit(Digit1);
  Digits[1]=DisplayDigit(Digit2);
  
  while(i<50)
  {
     *outputK=0x03;
    *outputF=0x00;
    for(k=0;k<2;k++)
    {
    *outputF=Digits[k];
    *outputK=cntl[k];
    delay(10);
    *outputK=0x03;
    }
   i++;
   *outputF=0x00;
  }
}
void Display42(int Number)
{
  volatile int outputmodeF=0xff,outputmodeK=0x0c,i=0,k=0,Digit1,Digit2;
   init_portF(outputmodeF);
  init_portK(outputmodeK);
  volatile int cntl[2]={0x0b,0x07};
  volatile int Digits[2]={0x3f,0x3f};
  if(Number>9)
  {
    Digit1=Number/10;
    Digit2=Number%10;
  }
  else{
    Digit2=Number;
    Digit1=0;
  }
  Digits[0]=DisplayDigit(Digit1);
  Digits[1]=DisplayDigit(Digit2);
  
  while(i<50)
  {
     *outputK=0x0c;
    *outputF=0x00;
    for(k=0;k<2;k++)
    {
    *outputF=Digits[k];
    *outputK=cntl[k];
    delay(10);
    *outputK=0x0c;
    }
   i++;
   
  }
}

void Display60sec()
{
  volatile int Min=0;
   for(Min=0;Min<60;Min++)
   {
   Display4(Min);
   }
}
int ReadSwitch()
{
  volatile int inputmodeC=0x00,inputmodeA=0x00,Switch=0,Switch1=0;
  volatile long i;
  init_portC(inputmodeC);
  init_portA(inputmodeA);
  Switch=*inputA;
  Switch1=*inputC;
  if((Switch & 0x01)==0x01)
  {
    for(i=0;i<150000;i++);
    return 0;
  }
  else if((Switch & 0x02)==0x02)
  {
    for(i=0;i<150000;i++);
    return 1;
  }
   else if((Switch & 0x04)==0x04)
  {
    for(i=0;i<150000;i++);
    return 2;
  }
   else if((Switch & 0x08)==0x08)
  {
    for(i=0;i<150000;i++);
    return 3;
  }
  else if((Switch & 0x10)==0x10)
  {
    for(i=0;i<150000;i++);
    return 4;
  }
  else if((Switch & 0x20)==0x20)
  {
    for(i=0;i<150000;i++);
    return 5;
  }
   else if((Switch & 0x40)==0x40)
  {
    for(i=0;i<150000;i++);
    return 6;
  }
   else if((Switch & 0x80)==0x80)
  {
    for(i=0;i<150000;i++);
    return 7;
  }
  else if((Switch1 & 0x01)==0x01)
  {
    for(i=0;i<150000;i++);
    return 9;
  }
  else if((Switch1 & 0x02)==0x02)
  {
    for(i=0;i<150000;i++);
    return 8;
  }
  else
  {
    return -1;
  }
}
int Read_KeyPadSwitch()
{
volatile int i=0,x=0,y=0,j=0;
  volatile int outputmodeA=0xff,outputmodeC=0x00;
  init_portA(outputmodeA);
  init_portC(outputmodeC);

  for(i=0;i<4;i++)
{
    *outputA=1<<i;
    y=*outputA;
     x=*inputC;
    
  if((y&0x01)==0x01 && x!=0x00)
    {
      delay(300);
      if(x==0x01)
      {
        return 1;
      }
     else if(x==0x02)
      { 
        return 2;
      }
       else if(x==0x04)
      {
            return 3; 
      }
       else if(x==0x08)
      {
        return 10; 
      }
    

    }
  else if((y&0x02)==0x02 && x!=0x00)
    {
    delay(300);
      if(x==0x01)
      {
          return 4;
      }
     else if(x==0x02)
      {
           return 5; 
      }
       else if(x==0x04)
      {
           return 6; 
      }
       else if(x==0x08)
      {
         return 11;
      }
    
    }
  else if((y&0x04)==0x04 && x!=0x00)
    {
     delay(300);
      if(x==0x01)
      {
           return 7;
      }
     else if(x==0x02)
      {   
          return 8;
      }
       else if(x==0x04)
      {
            return 9;
      }
       else if(x==0x08)
      {
       return 12; 
      }
     
    }
   else if((y&0x08)==0x08 && x!=0 )
    {
       delay(300);
      if(x==0x01)
      {    
          
        return 13;   
      }
     else if(x==0x02)
      {
          
         return 0;
        
      }
       else if(x==0x04)
      {
          
          return 14;
      }
       else if(x==0x08)
      {   

            return 15;
      }
    }  
}

  return -1;
}