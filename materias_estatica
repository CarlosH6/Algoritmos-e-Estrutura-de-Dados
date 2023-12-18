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
  Disciplina materias[7];
} Aluno;

int main(void) {
  Aluno aluno;
  strcpy(aluno.nome, "carlos");
  aluno.idade = 19;
  aluno.matricula = 2023;
  strcpy(aluno.materias[0].nome, "matematica");
  aluno.materias[0].nota = 7;
  aluno.materias[0].codigo = 98078;
  printf("%s\n%d\n%d\n%s\n%d\n%d\n", aluno.nome, aluno.idade, aluno.matricula, aluno.materias[0].nome, aluno.materias[0].nota, aluno.materias[0].codigo);
  return 0;
}
