#include <stdio.h>

int main() {
  FILE *entrada = fopen("entrada_q3.txt", "r");
  FILE *saida = fopen("saida_q3.txt", "w");

  if (entrada == NULL || saida == NULL) {
    printf("Erro ao abrir os arquivos!");
    return 1;
  }

  char nome[50];
  float nota1, nota2, nota3, media;
  while (fscanf(entrada, "%s\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3) !=
         EOF) {
    media = (nota1 + nota2 + nota3) / 3;
    fprintf(saida, "%s\t%.2f\t%s\n", nome, media,
            (media >= 7.0) ? "Aprovado" : "Reprovado");
  }

  fclose(entrada);
  fclose(saida);

  return 0;
}
