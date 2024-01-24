1.
#include <stdio.h>

typedef union tipo {
  char alimento;
  char bebida;
  char eletronico;
} Tipo;

typedef struct produto {
  char nome[20];
  int preco;
  Tipo tipo;
} Produto;

void ler_dados(Produto *produto) {
  printf("Digite o nome do produto: ");
  scanf("%s", produto->nome);

  printf("Digite o preço do produto: ");
  scanf("%d", &produto->preco);

  printf("Digite o tipo do produto (a para alimento, b para bebida, c para eletrônico): ");
  scanf(" %c", &produto->tipo.alimento);
}

void printar_produtos(Produto *produto) {
  printf("Nome: %s\n", produto->nome);
  printf("Preço: %d\n", produto->preco);

  switch (produto->tipo.alimento) {
    case 'a':
      printf("Tipo: Alimento\n");
      break;
    case 'b':
      printf("Tipo: Bebida\n");
      break;
    case 'e':
      printf("Tipo: Eletrônico\n");
      break;
    default:
      printf("Tipo inválido\n");
  }
}

int main(void) {
  Produto produto;
  ler_dados(&produto);
  printar_produtos(&produto);
  return 0;
}

2.
#include <stdio.h>
 
typedef enum genero{
  masculino,
  feminino
}Genero;
 
typedef struct pessoa{
  char nome[20];
  int idade;
  Genero genero_pessoa;
}Pessoa;
 
void get_dados(Pessoa * pessoa){
  // Função para preencher os dados das pessoas
  printf("Digite o nome da pessoa: ");
  scanf("%s", pessoa->nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d", &pessoa->idade);
  printf("Digite o genero da pessoa: ");
  scanf("%d", &pessoa->genero_pessoa);
}
 
void print_dados(Pessoa * pessoa){
  // Função para imprimir os dados das pessoas
  printf("Nome: %s\nIdade: %d\nGenero: %s\n", pessoa->nome, pessoa->idade, pessoa->genero_pessoa==masculino?"Feminino":"Masculino");
}
 
int main(void){
  Pessoa * pessoa;
  get_dados(&pessoa);
  print_dados(&pessoa);
  return 0;
}

3.
#include <stdio.h>

typedef enum meses {
  JANEIRO = 1,
  FEVEREIRO,
  MARCO,
  ABRIL,
  MAIO,
  JUNHO,
  JULHO,
  AGOSTO,
  SETEMBRO,
  OUTUBRO,
  NOVEMBRO,
  DEZEMBRO
} Meses;

typedef struct data {
  int dia;
  Meses mes;
  int ano;
} Data;

void ler_dados(Data *d) {
  printf("Digite o dia: ");
  scanf("%d", &d->dia);

  printf("Digite o mes: ");
  scanf("%d", (int *)&d->mes);

  printf("Digite o ano: ");
  scanf("%d", &d->ano);
}

void imprimir_data(Data d) {
  printf("%02d/%02d/%04d\n", d.dia, d.mes, d.ano);
}

int main(void) {
  Data d;
  ler_dados(&d);
  imprimir_data(d);
  return 0;
}
