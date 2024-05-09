#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int opcao;
  printf("MENU PRINCIPAL\n");
  printf("0 - Quitar\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligações feitas\n");
  int deu_certo = scanf("%d", &opcao);

  switch(opcao) {
    default:
      printf("Tchau!\n");
      return 1;
    case 1:
      printf("Consultando saldo...\n");
      printf("Saldo é 57 Jades Estelares\n");
      break;
    case 2:
      printf("Preparando...\n");
      printf("entre com valor de recarga: ");
      float recarga;
      deu_certo = scanf("%f", &recarga);
      break;
    case 3:
      printf("Acessando...\n");
      int recados = 0;
      printf("Você tem %d recados...\n", recados);
      break;
    case 4:
      printf("Acessando...\n");
      int numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8;
      numero1 = (rand() % 10) - 1;
      numero2 = (rand() % 10) - 1;
      numero3 = (rand() % 10) - 1;
      numero4 = (rand() % 10) - 1;
      numero5 = (rand() % 10) - 1;
      numero6 = (rand() % 10) - 1;
      numero7 = (rand() % 10) - 1;
      numero8 = (rand() % 10) - 1;
      printf("Você ligou para 61 9%d%d%d%d-%d%d%d%d\n", numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8);
  }
  return 0;
}