void main() {
     unsigned char cont = 0x0;
     
     CMCON = 0x07; // Desabilita os comparadores internos
     TRISB = 0x00; // Configura como saída o PORTB
     PORTB = 0x00; // Configura o estado inicial do PORTB como baixo

     while(1) {
              PORTB = ((cont/10) << 4) + cont % 10;
              cont = ++cont % 100;
              delay_ms(100);
     }
}
