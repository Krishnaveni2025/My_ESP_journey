//Use 4 x 4 Keypad and Quad 7 Segment Display
//01 Press any switch & display that number.
//Ex: 1 - > 1, 2 ->2, … 8 -> 8,9 -> 9,0 -> 0.
void delay1(void);
void display_number(void);
void setup()
{
  volatile char *dirf ;//R1 to R4 connected to PortF as output
  dirf = 0x30;*dirf = 0xFF;
  volatile char *dirk;//C1 to C4 are connected to PortK as input
  dirk = 0x107;*dirk  = 0x00;
  volatile char *dira;//A to Dp are connected to PortA as output
  dira = 0x21; *dira  = 0xFF;
 
 
}
void loop(){
   volatile char *dirc;//D1 to D4 are connected to PortC as input
   dirc = 0x27; *dirc = 0x01;
   volatile char *outc;//D1 D2 D3 D4
   *outc =0x01;
   display_number();
   delay1();
   
}
void delay1(void){
  volatile long i;
  for(i=0;i<10000;i++);
}
void display_number(void)
{
  volatile char *outa ;//Output of Quad 7 segment display
   outa = 0x22;
   volatile char *ink ,x,i; // Input of Keypad Columns
   ink = 0x106;
   volatile char *outf ; // Output of keypad Rows
   outf = 0x31;
   
   volatile char numbers[10] = {0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F,0x6F,0x3F};
  //while (1) {
    for (i = 0; i < 4; i++) {
      *outf = 1 << i;
      x = *ink;
      if (*outf == 1 && x == 1) { //row 1 column 1 (1)
        *outa = numbers[0];
        delay1();
        break;
      }
      if (*outf == 1 && x == 2) { //row 1 column 2 (2)
      
        *outa = numbers[1];
        delay1();
        break;
      }
      if (*outf == 1 && x == 4) { //row 1 column 3 (3)
        
        *outa = numbers[2];
        delay1();
        break;
        
      }
      if (*outf == 2 && x == 1) { // row 2 column 1 (4)
        
        *outa = numbers[3];
        delay1();
        break;
        
      }
      if (*outf == 2 && x == 2) { // row 2 column 2 (5)
        
        *outa = numbers[4];
        delay1();
        break;
        
      }
      if (*outf == 2 && x == 4) { // row 2 column 3 (6)
        
        *outa = numbers[5];
        delay1();
        break;
      
      }
      if (*outf == 4 && x == 1) { // row 3 column 1 (7)
       
        *outa = numbers[6];
        delay1();
        break;
    
      }
      if (*outf == 4 && x == 2) { // row 3 column 2 (8)
        
        *outa = numbers[7];
        delay1();
        break;
        
      }
      if (*outf == 4 && x == 4) { // row 3 column 3 (9)
        
        *outa = numbers[8];
        delay1();
        break;
        
      }
      if (*outf == 8 && x == 2) { // row 4 column 2 (0)
       
        *outa = numbers[9];
        delay1();
        break;
        
      }
 //   }
  }
}