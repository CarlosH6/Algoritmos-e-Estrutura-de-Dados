1.
typedef struct ingresso {
  int preco;
  char local[100];
  char atracao[100];
} Ingresso;

1. A)
void preenche(Ingresso* i) {
 
  printf("Digite o preço do ingresso: ");
  scanf("%d", &i->preco);

  printf("Digite o local do show: ");
  scanf("%s", i->local);

  printf("Digite a atração do show: ");
  scanf("%s", i->atracao);
}

1. B)
void imprime(Ingresso* i) {
  printf("\n");
  printf("Preço: %d\n", i->preco);
  printf("Local: %s\n", i->local);
  printf("Atração: %s\n", i->atracao);
  printf("\n");
}

1. C)
void altera_preco(Ingresso* i, float valor) {
  printf("Qual o novo valor do ingresso? \n");
  scanf("%f", &valor);
  i->preco = valor;
}

1. D)
void imprime_menor_maior_preco(Int n, Ingresso* vet) {
  int menor = vet[0].preco;
  int maior = vet[0].preco;
  for (int i = 1; i < n; i++) {
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

1. E)
int main(void) {
  float valor;
  Ingresso vet[3];
  for (int i = 0; i < 3; i++) {
    preenche(&vet[i]);
    altera_preco(&vet[i], valor);
    imprime(&vet[i]);
  }
  imprime_menor_maior_preco(3, vet);
  return 0;
}

2.
typedef struct Aluno {
  int matricula;
  char nome[80];
  char turma;
  float notas[3];
  float media;
} Aluno;

2. A)
void matricula(int n, Aluno** alunos) {
  if(n > 3) {
    printf("Número de alunos excede o limite máximo de 3 alunos.\n");
    return;
  } else {
    for(int i = 0; i < n; i++) {
      alunos[i] = (Aluno*)malloc(sizeof(Aluno));
      printf("Digite a matrícula do aluno %d: ", i+1);
      scanf("%d", &alunos[i]->matricula);
      printf("Digite o nome do aluno %d: ", i+1);
      scanf("%s", alunos[i]->nome);
      printf("Digite a turma do aluno %d: ", i+1);
      scanf(" %c", &alunos[i]->turma);
      printf("Digite a primeira nota do aluno %d: ", i+1);
      scanf("%f", &alunos[i]->notas[0]);
      printf("Digite a segunda nota do aluno %d: ", i+1);
      scanf("%f", &alunos[i]->notas[1]);
      printf("Digite a terceira nota do aluno %d: ", i+1);
      scanf("%f", &alunos[i]->notas[2]);
      printf("\n");
    }
  }
}

2. B)
void lanca_notas(int n, Aluno** alunos) {
  for (int i = 0; i < n; i++) {
    printf("As notas de %s são: %.1f, %.1f e %.1f\n", alunos[i]->nome, alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
    alunos[i]->media = (alunos[i]->notas[0] + alunos[i]->notas[1] + alunos[i]->notas[2]) / 3;
    printf("A média de %s é: %.1f\n", alunos[i]->nome, alunos[i]->media);
    printf("\n");
  }
}

2. C)
void imprime_tudo(int n, Aluno** alunos) {
  printf("Todos os dados de todos os alunos: \n");
  for (int i = 0; i < n; i++) {
    printf("Matrícula: %d\n", alunos[i]->matricula);
    printf("Nome: %s\n", alunos[i]->nome);
    printf("Turma: %c\n", alunos[i]->turma);
    printf("Notas: %.1f, %.1f e %.1f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
    printf("Média: %.1f\n", alunos[i]->media);
    printf("\n");
  }
}

2. D)
void imprime_turma(int n, Aluno** alunos, char turma) {
  for (int i = 0; i < n; i++) {
    if (alunos[i]->turma == turma) {
      printf("Dados da turma %c:\n", turma);
      printf("Matrícula: %d\n", alunos[i]->matricula);
      printf("Nome: %s\n", alunos[i]->nome);
      printf("Turma: %c\n", alunos[i]->turma);
      printf("Notas: %.1f, %.1f, %.1f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
      printf("Média: %.1f\n", alunos[i]->media);
      printf("\n");
    }
  }
}

2. E)
void imprime_turma_aprovados(int n, Aluno**alunos, char turma) {
  for (int i = 0; i < n; i++) {
    if (alunos[i]->turma == turma && alunos[i]->media >= 7) {
      printf("Dados dos aprovados da turma %c:\n", turma);
      printf("Matrícula: %d\n", alunos[i]->matricula);
      printf("Nome: %s\n", alunos[i]->nome);
      printf("Turma: %c\n", alunos[i]->turma);
      printf("Notas: %.1f, %.1f, %.1f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
      printf("Média: %.1f\n", alunos[i]->media);
      printf("\n");
    }
  }
}

3.
typedef struct retangulo {
  int base;
  int altura;
} Retangulo;

typedef struct circulo {
  int raio;
} Circulo;

3. A)
Retangulo* ret_circunscrito(Circulo* c, float h) {
  Retangulo* r = (Retangulo*)malloc(sizeof(Retangulo));
  r->base = c->raio * 2;
  r->altura = h;
  return r;
}

3. B)
Circulo* circ_interno(Retangulo* r) {
  Circulo* c = (Circulo*)malloc(sizeof(Circulo));
  c->raio = (r->base < r->altura) ? r->base / 2 : r->altura / 2;
  return c;
}
