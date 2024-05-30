#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  srand(time(NULL));
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
    while (getchar() != '\n')
      ;
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
      char player[31];
      int moedas = 0;
      int espada_da_luz = 0;
      int espada_da_lua = 0;
      int espada_do_vento = 0;
      int espada_do_mar = 0;
      int espada_de_Terra = 0;
      char choice[1] = "n";
      char ataque[64];
      char inimigo[64];
      char items[10][8];
      int vida_inimigo = 0;
      int vida_player = 100;
      int dano = 0;
      int escolha = 0;
      for (int f = 0; f <= 1; f++) {
        choice[f] = toupper(choice[f]);
      }
      while (choice[0] == 'N') {
        deu_certo = system("clear");
        printf("Insira o Nome do Jogador: ");
        deu_certo = scanf("%[^\n]s", player);
        while (getchar() != '\n')
          ;
        printf("%s...\nEsse nome está correto? (S/N): ", player);
        deu_certo = scanf("%s", choice);
        for (int f = 0; f <= 1; f++) {
          choice[f] = toupper(choice[f]);
        }
        while (getchar() != '\n')
          ;
      }
      printf("O reino de Santoria está em perigo! A maior guerra da história "
             "está prestes a começar!\nComo morador de Santoria, você deve "
             "lutar para sobreviver e salvar o reino!\n");
      getchar();
      printf("Numa caverna escura, %s se depara com um templo de um tempo a "
             "muito esquecido...\nDeseja entrar no templo e desbravar seus "
             "segredos? (S/N): ",
             player);
      deu_certo = scanf("%s", choice);
      if (choice[0] != 'S') {
        printf(
            "Você decide não entrar no templo e voltar para casa.\n%s nunca se "
            "torna parte dessa história, não impede e nem se quer participa da "
            "guerra...\nVive uma vida normal e morre na velhice...\nFIM",
            player);
        break;
      }
      printf("Você entra no templo e se depara com um grande altar com uma "
             "espada cravada no centro...\nDeseja pegar a espada? (S/N): ");
      deu_certo = scanf("%s", choice);
      if (choice[0] != 'S') {
        printf("Você decide não pegar a espada do templo e voltar para "
               "casa.\n%s nunca se torna parte dessa história, não impede e "
               "nem se quer participa da guerra...\nVive uma vida normal e "
               "morre na velhice...\nFIM",
               player);
        break;
      }
      printf("Você remove a espada de seu altar e a segura em suas "
             "mãos...\nA espada é a lendária Espada Celestial da Luz "
             "Reveladora, ela é muito poderosa...");
      espada_da_luz = 1;
      dano = 10;
      strcpy(ataque, "Corte da Revelação");
      printf("Quando a espada é removida de seu selo, uma estatua de pedra "
             "presente na sala ganha vida e ataca!");
      int luta = 1;
      int escapismo = 0;
      strcpy(inimigo, "Guardião da Luz");
      vida_inimigo = 100;
      while (luta == 1) {
        while (getchar() != '\n')
          ;
        printf("O que você faz? (1 - Atacar | 2 - Arsenal | 3 - Analise | 4 - Fugir");
        switch (escolha) {
        default:
          printf("Opção inválida! Pressione START para repetir\n");
          getchar();
          break;
        case 1:
          printf("Você ataca o %s com %s !\n", inimigo, ataque);
          vida_inimigo -= dano;
          break;
        case 2:
          printf("Você não possui outras espadas");
          break;
        case 3:
          printf("Nome: %s\nVida: %d\nDano: 5\n", inimigo, vida_inimigo);
          break;
        case 4:
          escapismo = rand() % 2;
          if (escapismo == 1) {
            printf("você escapa!");
            luta = 0;
          } else {
            printf("você não consegue escapar!");
            luta = 2;
          }
          break;
        case 5:
          printf("Você possui %d moedas, deseja encerrar sessão? (S/N)",
                 moedas);
          deu_certo = scanf("%s", choice);
          if (choice[0] == 'N') {
            break;
          }
          printf("Encerrando sessão...");
          opcao = 4;
          luta = 0;
          break;
        }
        while (luta == 2) {
          printf("%s ataca!\n", inimigo);
          vida_player = vida_player - 5;
          luta = 1;
        }
      }
    case 2:
      printf("Abrindo a Tabela de Ranking...\n");
      getchar();
      break;
    case 3:
      printf("Nesse Jogo, você será apresentado com situações e deve "
             "escolher entre Sim ou Não (S/N). Tambêm poderá precisar "
             "escolher entre 4 opções (1/2/3/4).\n");
      printf("Depois de escolher seu nome, poderá entrar com '5' no painel "
             "de escolhas para finalizar sua sessão, salvar seu resultado no "
             "Ranking e sair do jogo.\n");
      printf("Precione START para recomeçar.\n");
      getchar();
      break;
    case 4:
      printf("Fechando o jogo...\n");
      deu_certo = system("clear");
      break;
      return 0;
    }
    }
  }
}