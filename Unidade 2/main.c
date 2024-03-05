#include <stdio.h>

typedef struct ingresso {
  int preco;
  char local[100];
  char atracao[100];
} Ingresso;

void preenche(Ingresso* i) {
 
  printf("Digite o preço do ingresso: ");
  scanf("%d", &i->preco);

  printf("Digite o local do show: ");
  scanf("%s", i->local);

  printf("Digite a atração do show: ");
  scanf("%s", i->atracao);
}

void imprime(Ingresso* i) {
  printf("\n");
  printf("Preço: %d\n", i->preco);
  printf("Local: %s\n", i->local);
  printf("Atração: %s\n", i->atracao);
  printf("\n");
}

void altera_preco(Ingresso* i) {
  int novo_valor;
  printf("Qual o novo valor do ingresso? \n");
  scanf("%d", &novo_valor);
  i->preco = novo_valor;
}

void imprime_menor_maior_preco(Ingresso* vet) {
  int menor = vet[0].preco;
  int maior = vet[0].preco;
  for (int i = 1; i < 3; i++) {
    if (vet[i].preco < menor) {
      menor = vet[i].preco;
    } else {
      if (vet[i].preco > maior) {
        maior = vet[i].preco;
      }
    }
  }
  printf("O menor preço é: %d\n", menor);
  printf("O maior preço é: %d\n", maior);
}

int main(void) {
  Ingresso vet[3];
  for (int i = 0; i < 3; i++) {
    preenche(&vet[i]);
    altera_preco(&vet[i]);
    imprime(&vet[i]);
  }
  imprime_menor_maior_preco(vet);
  return 0;
}
