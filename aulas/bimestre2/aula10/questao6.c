/*
6. Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char verbo[21];

  printf("Entre com o verbo: ");
  int deu_certo = scanf("%s", verbo);
  if (deu_certo != 1) {return 1;}
  int tamanho = strlen(verbo);
  for (int f = 0; f<tamanho; f++) {
    verbo[f] = toupper(verbo[f]);
  }
  if (verbo[tamanho-2] == 'A' && verbo[tamanho-1] == 'R'){
    verbo[tamanho-2] = '\0';
    char radical[21];
    strcpy(radical, verbo);
    char pronomes[6][4] = {"EU", "TU", "ELE", "NÓS", "VÓS", "ELES"};
    char sufixos[6][4] = {"O", "AS", "A", "AMOS", "AIS", "AM"};

    for (int i=0; i<6; i++)
      printf("%s %s%s\n",pronomes[i], radical, sufixos[i]);
  } else {
    printf("O verbo não termina em AR!\n");
    return 1;
  }
  return 0;
}