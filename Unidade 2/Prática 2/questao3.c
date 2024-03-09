#include <stdio.h>

typedef struct {
  char nome[50];
  float preco;
} Fruta;

void cadastrarFrutas() {
  FILE *arquivo;
  Fruta fruta;
  char continuar;

  arquivo = fopen("frutas.txt", "a");

  do {
    printf("Digite o nome da fruta: ");
    scanf("%s", fruta.nome);
    printf("Digite o preco da fruta: ");
    scanf("%f", &fruta.preco);

    fprintf(arquivo, "%s, %.2f\n", fruta.nome, fruta.preco);

    printf("Quer cadastrar outra fruta? (s/n) ");
    scanf(" %c", &continuar);
  } while (continuar == 's');

  printf("Cadastro finalizado\n");

  fclose(arquivo);
}

int main() {
  cadastrarFrutas();
  return 0;
}