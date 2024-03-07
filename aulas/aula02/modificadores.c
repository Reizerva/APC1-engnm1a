#include <stdio.h>

int main() {
  signed char caracter_com_sinal; // -128 a 127
  unsigned char caracter_sem_sinal; // 0 a 255

  signed int inteiro_com_sinal; // -2 bi a +2 bi 4 bytes
  unsigned int inteiro_sem_sinal; // 0 a 4 bi
  
  short int inteiro_curto_com_sinal; // -32 mil a 32mil 2 byte
  unsigned short int inteiro_curto_sem_sinal; // 0 a 65 mil
  long int inteiro_longo_com_sinal; // -9hexa a +9hexa 8 byte
  unsigned long int inteiro_longo_sem_sinal; // 0 a 18hexa
  
  long double duplo_longo; // -1.2e+4932 a +1.2e+4932
  return 0;
}