#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Aluno *cria_aluno(char nome[], int matricula) {
  Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
  if (aluno == NULL) {
    printf("Erro ao alocar memória\n");
    return NULL;
  }

  strcpy(aluno->nome, nome);
  aluno->matricula = matricula;
  aluno->num_disciplinas = 0;

  return aluno;
}

void matricula_disciplina(Aluno *aluno, Disciplina *disciplina) {
  if (aluno == NULL || disciplina == NULL) {
    return;
  }

  if (aluno->num_disciplinas >= 10) {
    printf("Máximo de disciplinas criadas\n");
    return;
  }

  for (int i = 0; i < aluno->num_disciplinas; i++) {
    if (aluno->disciplinas[i] == disciplina) {
      printf("Disciplina já matriculada\n");
      return;
    }
  }

  aluno->disciplinas[aluno->num_disciplinas++] = disciplina;
}

void exclui_aluno(Aluno *aluno) {
  if (aluno == NULL) {
    return;
  }

  free(aluno);
}
