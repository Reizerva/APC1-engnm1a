#include <stdio.h>

int main() {
  int avaliacao;
  printf("Entre com a nota do motorista:  ");
  int deu_certo = scanf("%d", &avaliacao);
  
  // if (avaliacao == 0){ printf("fraco");}
  // else if (avaliacao == 1){printf("*");}
  // else if (avaliacao == 1){printf("**");}
  // else if (avaliacao == 1){printf("***");}
  // else if (avaliacao == 1){printf("****");}
  // else if (avaliacao == 1){ printf("!!!*****!!!");}
  // else {printf("bota um valor certo brod");}
  
  switch (avaliacao) {
    case 0: printf("fraco \n"); break;
    case 1: printf("*\n"); break;
    case 2: printf("**\n"); break;
    case 3: printf("***\n"); break;
    case 4: printf("****\n"); break;
    case 5: printf("!!!*****!!!\n"); break;
    default: printf("bota um valor certo brod\n");
  }
  return 0;
}