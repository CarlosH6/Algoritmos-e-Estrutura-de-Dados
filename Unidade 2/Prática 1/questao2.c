#include <stdio.h>

int main() {
  int tamanho_vetor = 10;

  int numeros[tamanho_vetor];
  int menor, maior, soma = 0;
  float media;

  FILE *entrada = fopen("entrada.txt", "r");
  FILE *saida = fopen("saida.txt", "w");

  if (entrada == NULL || saida == NULL) {
    printf("Erro ao abrir os arquivos");
    return 1;
  }

  for (int i = 0; i < tamanho_vetor; i++) {
    fscanf(entrada, "%d", &numeros[i]);
  }

  menor = maior = numeros[0];

  for (int i = 1; i < tamanho_vetor; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > maior) {
      maior = numeros[i];
    }

    soma += numeros[i];
  }

  media = (float)soma / tamanho_vetor;

  fprintf(saida, "Menor elemento: %d\n", menor);
  fprintf(saida, "Maior elemento: %d\n", maior);
  fprintf(saida, "Média dos elementos: %.2f\n", media);

  fclose(entrada);
  fclose(saida);

  return 0;
}
