#include <stdio.h>

int main() {
  int n, i;
  char nomeAluno[50];
  float nota1, nota2, nota3;

  FILE *arquivo;
  arquivo = fopen("alunos.txt", "w");

  printf("Informe a quantidade de alunos: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", nomeAluno);
    printf("Digite a nota 1 do aluno %d: ", i + 1);
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno %d: ", i + 1);
    scanf("%f", &nota2);
    printf("Digite a nota 3 do aluno %d: ", i + 1);
    scanf("%f", &nota3);

    fprintf(arquivo, "Aluno %d - Nome: %s, Nota 1: %.2f, Nota 2: %.2f, Nota 3: %.2f\n", i + 1, nomeAluno, nota1, nota2, nota3);
  }

  fclose(arquivo);

  return 0;
}