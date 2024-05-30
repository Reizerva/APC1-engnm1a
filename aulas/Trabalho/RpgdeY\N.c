#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
  int opcao;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("Swords of Heavenliness\n");
    printf("1 - Iniciar\n");
    printf("2 - Ranking\n");
    printf("3 - Regras\n");
    printf("4 - Sair\n");
    printf("Opção: ");
    deu_certo = scanf("%d", &opcao);
    while (getchar() != '\n');
    if (!deu_certo) {
      opcao = 0;
    }
    switch (opcao) {
    default:
      printf("Opção inválida! Pressione START para repetir\n");
      getchar();
      break;
    case 1: {
      printf("Iniciando jogo...\n");
      FILE *arquivo = fopen("ranking.txt", "r");
      if (arquivo == NULL) {
        FILE *arquivo = fopen("ranking.txt", "w");
      }
      char player[31];
      int moedas = 0;
      char choice[1] = "n";
      for (int f = 0; f <= 1; f++) {choice[f] = toupper(choice[f]);}
      while (choice[0] == 'N') {
        deu_certo = system("clear");
        printf("Insira o Nome do Jogador 1: ");
        deu_certo = scanf("%[^\n]s", player);
        while (getchar() != '\n')
          ;
        printf("%s...\nEsse nome está correto? (S/N): ", player);
        deu_certo = scanf("%s", choice);
        while (getchar() != '\n')
          ;
      }
      printf("O reino de Santoria está em perigo! A maior guerra da história está prestes a começar!\nComo morador de Santoria, você deve lutar para sobreviver e salvar o reino!\n");
      printf("Numa caverna escura, %s se depara com um templo de um tempo a muito esquecido...\nDeseja entrar no templo e desbravar seus segredos? (S/N): ", player);
      deu_certo = scanf("%s", choice);
      if (choice[0] != 'S') {
        printf("Você decide não entrar no templo e voltar para casa.\n%s nunca se torna parte dessa história, não impede ou nem se quer participa da guerra...\nVive uma vida normal e morre na velhice...\nFIM", player);
        return 1;
      } else {
        printf("Você entra no templo e se depara com um grande salão com três portas
      }
    }
    case 2:
      printf("Abrindo a Tabela de Ranking...\n");
      getchar();
      break;
    case 3:
      printf("Nesse Jogo, você será apresentado com situações e deve escolher entre Sim ou Não (S/N). Tambêm poderá precisar escolher entre 4 opções (A/B/C/D).\n");
      printf("Depois de escolher seu nome, poderá entrar com 'Terminar' no painel de escolhas para finalizar sua sessão, salvar seu resultado no Ranking e sair do jogo.\n");
      printf("Precione START para recomeçar.\n");
      getchar();
      break;
    case 4:
      printf("Fechando o jogo...\n");
      deu_certo = system("clear");
      break;
    }
  }
  return 0;
}