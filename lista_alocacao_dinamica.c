1. A)
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char sexo;
    char opiniao[30];
} Resposta;

int main() {
    int n;

    printf("Digite o numero de pessoas a serem entrevistadas: ");
    scanf("%d", &n);
    Resposta *respostas = (Resposta *)malloc(n * sizeof(Resposta));

    if (respostas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &respostas[i].sexo);
        printf("Opinião (gostou/não gostou): ");
        scanf(" %s", respostas[i].opiniao);
    }

    printf("\nResultados:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d: Sexo = %c, Opinião = %s\n", i + 1, respostas[i].sexo, respostas[i].opiniao);
    }

    free(respostas);
    return 0;
}

1. B)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char sexo;
    char opiniao[30];
} Resposta;

int main() {
    int n;
    float countFavoravel = 0;

    printf("Digite o numero de pessoas a serem entrevistadas: ");
    scanf("%d", &n);
    Resposta *respostas = (Resposta *)malloc(n * sizeof(Resposta));

    if (respostas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &respostas[i].sexo);
        printf("Opinião (gostou/não gostou): ");
        scanf(" %s", respostas[i].opiniao);

        if (respostas[i].sexo == 'F' && strcmp(respostas[i].opiniao, "gostou") == 0) {
            countFavoravel++;
        }
    }

    float percentFavoravel = (countFavoravel / n) * 100;
    printf("\nPorcentagem de pessoas do sexo feminino que gostaram do produto: %f%%\n", percentFavoravel);

    free(respostas);
    return 0;
}

1. C)
#include <stdio.h>

int main() {
    int n;
    int contadorMasculinoNaoGostou = 0;

    printf("Digite o numero de pessoas a serem entrevistadas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero de pessoas invalido.\n");
        return 1;
    }

    while (getchar() != '\n');

    for (int i = 0; i < n; i++) {
        char sexo, opiniao;

        printf("Pessoa %d - Sexo (M/F): ", i + 1);
        scanf(" %c", &sexo);

        while (getchar() != '\n');

        printf("Pessoa %d - Opiniao (gostou/nao gostou): ", i + 1);
        scanf(" %c", &opiniao);
        while (getchar() != '\n');

        if ((sexo == 'M' || sexo == 'm') && (opiniao == 'N' || opiniao == 'n')) {
            contadorMasculinoNaoGostou++;
        }
    }

    float porcentagem = (float)contadorMasculinoNaoGostou / n * 100;
    printf("\nPorcentagem de homens que nao gostaram do produto: %.2f%%\n", porcentagem);
    return 0;
}

2.
#include <stdio.h>

int main() {
    int n;
    printf("Digite o número de questões: ");
    scanf("%d", &n);

    char gabarito[n+1];
    printf("Digite o gabarito da prova: ");
    scanf("%s", gabarito);

    int aprovados = 0;

    for (int aluno = 1; aluno <= 10; aluno++) {
        char respostas[n+1];
        printf("Digite as respostas do aluno %d: ", aluno);
        scanf("%s", respostas);

        int nota = 0;
        for (int i = 0; i < n; i++) {
            if (respostas[i] == gabarito[i]) {
                nota += 10/n;
            }
        }

        printf("Nota do aluno %d: %d\n", aluno, nota);

        if (nota >= 6) {
            aprovados++;
        }
    }

    float porcent_aprovados = (float)aprovados / 10 * 100;
    printf("Porcentagem de alunos aprovados: %.2f%%\n", porcent_aprovados);

    return 0;
}
