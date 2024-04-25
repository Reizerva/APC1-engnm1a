#include <stdio.h>

int main() {
  char caracter; // 'A' '1' '\n' '\\' 1 byte -128 a 127
  int inteiro;   // -15, 0, +15 4 bytes -2 bilhões a +2 bilhões
  float decimal_com_6casas; // 0.000001 4bytes -3.8e38 a +3.41e38
  double decimal_com_15casas; // 0.000000000000001 8byte -1.8e308 a +1.8e308
  void sem_valor; // não tem string, mas aceita "uma frase qualquer"
  return 0;
}