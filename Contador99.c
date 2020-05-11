void main() {
     unsigned char cont = 0x0;
                   
     CMCON = 0x07;
     TRISB = 0x00;
     PORTB = 0x00;

     while(1) {
              PORTB = ((cont/10) << 4) + cont % 10;
              cont = ++cont % 100;
              delay_ms(100);
     }
}