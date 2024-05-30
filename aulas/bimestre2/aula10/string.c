#include <stdio.h>
#include <string.h>

int main() {
  char nome[31]; // \0 no final
  printf("Entre com o nome: ");
  int deu_certo = scanf("%[^\n]s", nome);
  printf("Olá, %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome, "Jose");
  strcpy(ultimo_nome, "Jose");
  strcpy(nome, primeiro_nome);
  strcat(nome, " ");
  strcat(nome, ultimo_nome);
  printf("%s\n", nome);
  int tamanho = strlen(nome);
  printf("Tamanho: %d\n", tamanho);
  printf("São iguais? %d\n", strcmp(primeiro_nome, ultimo_nome));
  
  return 0;
}