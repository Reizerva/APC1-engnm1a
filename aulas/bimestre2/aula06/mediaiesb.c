#include <stdio.h>

int main() {
  float nota1, nota2;
  printf("Entre com a 1a nota: ");
  int deu_certo = scanf("%f", &nota1);

  if (nota1 >= 0.0f && nota1 <= 10.0f) {
    printf("Entre com a 2a nota: ");
    deu_certo = scanf("%f", &nota2);
    if (nota2 >= 0.0f && nota2 <= 10.0f) {
      float media = (nota1 * 0.4f) + (nota2 * 0.6f);
      printf("A média é: %.2f\n", media);
    }
    else {
      printf("Nota 2 inválida!\nForneça uma nota entre 0.0 e 10.0\n");
    }
  }
  else {
    printf("Nota 1 inválida!\nForneça uma nota entre 0 e 10\n");
  }
  
  return 0;
}