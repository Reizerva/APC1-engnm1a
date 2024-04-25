#include <stdio.h>

int main() {
    float nota1, nota2;
    printf("Entre com a 1a nota: ");
    int deu_certo = scanf("%f", &nota1);

    if (nota1 < 0.0f || nota1 > 10.0f) {
      printf("Nota inválida!\nForneça uma nota entre 0 e 10\n");
      return 1; 
    }
  float p1 = nota1 * 0.4f;
  float p2 = 5.0f - p1;
  nota2 = p2 / 0.6f;
  printf("A nota 2 precisa ser %.2f\n", nota2);
  
  return 0;
}