#include "aluno.h"
#include "disciplina.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  Disciplina *disciplina1 = cria_disciplina("Cálculo", 123);
  Disciplina *disciplina2 = cria_disciplina("Algoritmos", 456);

  Aluno *aluno1 = cria_aluno("Carlos Henrique", 101);
  Aluno *aluno2 = cria_aluno("Luan Junior", 102);

  matricula_disciplina(aluno1, disciplina1);
  matricula_disciplina(aluno1, disciplina2);
  matricula_disciplina(aluno2, disciplina1);

  printf("Aluno: %s\nMatrícula: %d\nDisciplinas:", aluno1->nome,
         aluno1->matricula);
  for (int i = 0; i < aluno1->num_disciplinas; i++) {
    printf(" %s", aluno1->disciplinas[i]->nome);
  }

  printf("\n\nAluno: %s\nMatrícula: %d\nDisciplinas:", aluno2->nome,
         aluno2->matricula);
  for (int i = 0; i < aluno2->num_disciplinas; i++) {
    printf(" %s", aluno2->disciplinas[i]->nome);
  }

  exclui_aluno(aluno1);
  exclui_aluno(aluno2);
  exclui_disciplina(disciplina1);
  exclui_disciplina(disciplina2);
  return 0;
}
