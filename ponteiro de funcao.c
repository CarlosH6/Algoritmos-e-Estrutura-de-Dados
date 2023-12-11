#include <stdio.h>

int soma(int a, int b) { return a + b;}

int subtracao(int a, int b) {return a - b;}

int multiplicacao(int a, int b) {return a * b;}

int divisao(int a, int b) {return a / b;}

int calcular(int x, int y, int (*operacao)(int, int)) {
  return (*operacao)(x, y);
}

int main() {
  char escolha;
  printf("Escolha a operação (+, -, *, /): ");
  scanf("%c", &escolha);
  int resultado;
  if (escolha == '+') {
    resultado = calcular(5, 3, soma);
  }
  else if (escolha == '-') {
    resultado = calcular(5, 3, subtracao);
  }
  else if (escolha == '*') {
    resultado = calcular(5, 3, multiplicacao);
  }
  else if (escolha == '/') {
    resultado = calcular(5, 3, divisao);
  }
  else {
    printf("Operação inválida\n");
    return 1;
  }
  
  printf("Resultado: %d\n", resultado);
  return 0;
}
