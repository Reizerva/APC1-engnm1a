#include <stdio.h>
#include <math.h>

int main() {
  int num1, num2;
  printf("dê o primeiro número: ");
  int deu_certo = scanf("%i", &num1);
  printf("dê o segundo número: ");
  deu_certo = scanf("%i", &num2);

  int soma = num1 + num2;
  printf("A soma é %i\n", soma);
  int subt = num1 - num2;
  printf("A subtração é %i\n", subt);
  int mult = num1 * num2;
  printf("A multiplicação é %i\n", mult);
  float divi = 1.0f * num1 / 1.0f * num2;
  printf("A divisão é %f\n", divi);
  int rest = num1 % num2;
  printf("O resto da divisão é %i\n", rest);
  printf("O incremento do 1ro numero é %i\n", num1++);
  printf("O incremento do 1ro numero é %i\n", ++num1);
  printf("O decremento do 1ro numero é %i\n", num1--);
  printf("O decremento do 1ro numero é %i\n", --num1);
  double raiz2 = sqrt(num1);
  printf("A raiz quadrada do 1ro numero é %f\n", raiz2);
  double pote3 = pow(num1, 3);
  printf("A 1ro numero é elevado ao cubo é %f\n", pote3);
  double loga2 = log2(num1);
  printf("O logarítimo do 1ro numero na base 2 é %f\n", loga2);
  const double PI = 3.1416;
  double seno = sin(num1*(PI/180));
  double coss = cos(num1*(PI/180));
  double tang = tan(num1*(PI/180));
  printf("O seno do 1ro numero é %f\n", seno);
  printf("O cosseno do 1ro numero é %f\n", coss);
  printf("A tangente do 1ro numero é %f\n", tang);
  
  return 0;
}
