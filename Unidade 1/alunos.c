#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char nome[20];
  int idade;
  int matricula;
  char email[50];
};

void preeche(struct aluno* estudante) {
  printf("Digite o nome do aluno: ");
  scanf("%s", estudante->nome);
  printf("Digite a idade do aluno: ");
  scanf("%d", &estudante->idade);
  printf("Digite a matricula do aluno: ");
  scanf("%d", &estudante->matricula);
  printf("Digite o email do aluno: ");
  scanf("%s", estudante->email);
}

void imprime(struct aluno* estudante) {
  printf("Nome: %s\n", estudante->nome);
  printf("Idade: %d\n", estudante->idade);
  printf("Matricula: %d\n", estudante->matricula);
  printf("Email: %s\n", estudante->email);
}

int main(void) {
  struct aluno *estudante = (struct aluno*)malloc(sizeof(struct aluno));
  if (estudante == NULL) {
    exit(1);
  }
  preeche(estudante);
  imprime(estudante);
  free(estudante);
  return 0;
}
