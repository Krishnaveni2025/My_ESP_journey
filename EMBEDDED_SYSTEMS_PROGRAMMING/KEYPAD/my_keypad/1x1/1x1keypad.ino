void setup() {
  // put your setup code here, to run once:
  volatile char *ddra, *ddrk, *ddrf;
  ddra = 0x21; ddrk = 0x107; ddrf = 0x30;
  *ddra = 0xFF;//as output direction
  *ddrk = 0xF0;//k0 to k3 as input direction
  *ddrf = 0x0F;//f0 to f3 as output direction
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *ink, *outa, *outf;
  ink = 0x106; outa = 0x22; outf = 0x31;
  while (1)
  {
    *outf = 0x01;
    if ((*ink && 0x01) == 0x01)
    {
      *outa = 0x01;
    }
    *outa = 0x00;
  }
}
