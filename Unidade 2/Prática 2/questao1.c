#include <stdio.h>

int main() {
  int id;
  char nome[50];
  float salario;

  FILE *arquivo;
  arquivo = fopen("funcionarios.txt", "a");

  printf("Digite o ID do funcionario: ");
  scanf("%d", &id);
  printf("Digite o nome do funcionario: ");
  scanf("%s", nome);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &salario);

  fprintf(arquivo, "ID: %d\nNome: %s\nSalario: %.2f\n\n", id, nome, salario);

  fclose(arquivo);

  return 0;
}