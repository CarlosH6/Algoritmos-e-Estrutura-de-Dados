#include "disciplina.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Disciplina *cria_disciplina(char nome[], int codigo) {
  Disciplina *disciplina = (Disciplina *)malloc(sizeof(Disciplina));
  if (disciplina == NULL) {
    printf("Erro ao alocar memória\n");
    return NULL;
  }

  strcpy(disciplina->nome, nome);
  disciplina->codigo = codigo;

  return disciplina;
}

void exclui_disciplina(Disciplina *disciplina) {
  if (disciplina == NULL) {
    return;
  }

  free(disciplina);
}
