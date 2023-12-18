#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Disciplina {
  char nome[20];
  int nota;
  int codigo;
} Disciplina;

typedef struct Aluno {
  char nome[20];
  int idade;
  int matricula;
  Disciplina *materias;
} Aluno;

int main(void) {
  Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
  if (aluno == NULL) {
    exit(1);
  }
  aluno->materias = (Disciplina*)malloc(2 * sizeof(Disciplina));
  if (aluno->materias == NULL) {
    exit(1);
  }
  printf("Informe os dados do aluno: nome, idade e matricula ");
  scanf("%s %d %d", aluno->nome, &aluno->idade, &aluno->matricula);
  int index;
  for (index = 0; index < 2; index++) {
    printf("Cadastro da disciplina %d: ", index + 1);
    scanf("%s", aluno->materias[index].nome);
    scanf("%d %d", &aluno->materias[index].codigo, &aluno->materias[index].nota);)
  }
  return 0;
}
