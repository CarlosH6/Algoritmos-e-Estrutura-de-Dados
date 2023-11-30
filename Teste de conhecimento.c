// 1.

#include <stdio.h>

void arrayReverso(char array[], int n) {
  char temp;
  for (int i = 0; i < n / 2; i++) {
    temp = array[i];
    array[i] = array[n - i - 1];
    array[n - i - 1] = temp;
  }
}

int main(void) {
  char array[] = {'o', 's', 's', 'O', ' ', ',', 'r', 'a', 'd',
                  'a', 'R', ' ', ',', 'r', 'i', 'R', '\0'};
  int n = sizeof(array) / sizeof(array[0]) - 1;

  arrayReverso(array, n);

  for (int i = 0; i < n; i++) {
    printf("%c", array[i]);
  }
  printf("\n");

  return 0;
}

// 2.  O programa realiza operações com matrizes. A saída é -5.

// 3. Há vários pontos e vírgulas ausentes e a váriavel "i" não havia sido
// declarada anteriormente do "for".

// 4.

#include <stdio.h>

int somaInteiros(int numero1, int numero2);

int main(void) {
  int num1, num2;
  printf("Digite dois números: \n");
  scanf("%d", &num1);
  scanf("%d", &num2);

  int resultado = somaInteiros(num1, num2);

  printf("A soma dos números entre %d e %d é: %d\n", num1, num2, resultado);

  return 0;
}

int somaInteiros(int numero1, int numero2) {
  int soma = 0;
  if (numero1 > numero2) {
    for (int i = numero1; i > numero2 + 1;) {
      i--;
      soma += i;
    }
  } else {
    for (int i = numero1; i < numero2 - 1;) {
      i++;
      soma += i;
    }
  }

  return soma;
}

// 5. 2, 200.