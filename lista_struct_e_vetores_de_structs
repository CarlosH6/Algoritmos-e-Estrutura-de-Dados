1. A)
#include <stdio.h>

typedef struct {
    char nome[100];
    float salario;
    int identificador;
    char cargo[100];
} Funcionario;

void preencher_dados(Funcionario *func) {
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", func->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &func->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d", &func->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]", func->cargo);
}

int main() {
    Funcionario funcionario;
    preencher_dados(&funcionario);
    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Salario: %.2f\n", funcionario.salario);
    printf("Identificador: %d\n", funcionario.identificador);
    printf("Cargo: %s\n", funcionario.cargo);

    return 0;
}

1. B)
#include <stdio.h>

typedef struct {
    char nome[100];
    float salario;
    int identificador;
    char cargo[100];
} Funcionario;

void preencher_dados(Funcionario *func);

void imprimir_funcionario(const Funcionario *func) {
    printf("Nome: %s\n", func->nome);
    printf("Salario: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}

int main() {
    Funcionario funcionario;
    printf("Digite os dados do funcionario:\n");
    preencher_dados(&funcionario);

    printf("\nDados do funcionario:\n");
    imprimir_funcionario(&funcionario);

    return 0;
}

void preencher_dados(Funcionario *func) {
    printf("Digite o nome do funcionario: ");
    scanf("%s", func->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &func->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d", &func->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf("%s", func->cargo);
}

1. C)
#include <stdio.h>

typedef struct {
    char nome[100];
    float salario;
    int identificador;
    char cargo[100];
} Funcionario;

void preencher_dados(Funcionario *func);
void alterar_salario(Funcionario *func, float novo_salario);

void imprimir_funcionario(const Funcionario *func) {
    printf("Nome: %s\n", func->nome);
    printf("Salario: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}

int main() {
    Funcionario funcionario;
    printf("Digite os dados do funcionario:\n");
    preencher_dados(&funcionario);

    printf("\nDados do funcionario:\n");
    imprimir_funcionario(&funcionario);

    float novo_salario;
    printf("Digite o novo salario do funcionario: ");
    scanf("%f", &novo_salario);
    alterar_salario(&funcionario, novo_salario);

    printf("\nSalario alterado:\n");
    imprimir_funcionario(&funcionario);

    return 0;
}

void preencher_dados(Funcionario *func) {
    printf("Digite o nome do funcionario: ");
    scanf("%s", func->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &func->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d", &func->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf("%s", func->cargo);
}

void alterar_salario(Funcionario *func, float novo_salario) {
    func->salario = novo_salario;
}

1. D)
#include <stdio.h>

typedef struct {
    char nome[100];
    float salario;
    int identificador;
    char cargo[100];
} Funcionario;

void preencher_dados(Funcionario *func);
void imprimir_funcionario(const Funcionario *func);

void encontrar_maior_e_menor_salario(const Funcionario *funcionarios, int tamanho) {
    if (tamanho <= 0) {
        printf("Vetor vazio ou tamanho invalido.\n");
        return;
    }

    int indice_maior_salario = 0;
    int indice_menor_salario = 0;

    for (int i = 1; i < tamanho; i++) {
        if (funcionarios[i].salario > funcionarios[indice_maior_salario].salario) {
            indice_maior_salario = i;
        }
        if (funcionarios[i].salario < funcionarios[indice_menor_salario].salario) {
            indice_menor_salario = i;
        }
    }

    printf("\nFuncionario com maior salario:\n");
    imprimir_funcionario(&funcionarios[indice_maior_salario]);

    printf("\nFuncionario com menor salario:\n");
    imprimir_funcionario(&funcionarios[indice_menor_salario]);
}

int main() {

    Funcionario funcionarios[5];

    printf("Preencha os dados dos funcionarios:\n");
    for (int i = 0; i < 5; i++) {
        preencher_dados(&funcionarios[i]);
    }

    printf("\nDados dos funcionarios:\n");
    for (int i = 0; i < 5; i++) {
        imprimir_funcionario(&funcionarios[i]);
    }

    encontrar_maior_e_menor_salario(funcionarios, 5);

    return 0;
}

void preencher_dados(Funcionario *func) {
    printf("Digite o nome do funcionario: ");
    scanf("%s", func->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &func->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d", &func->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf("%s", func->cargo);
}

void imprimir_funcionario(const Funcionario *func) {
    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", func->nome);
    printf("Salario: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}

2. typedef struct {
    char nome[100];
    char documento[20];
    int idade;
} Pessoa;

2. A)
void preencherPessoa(Pessoa *p) {
    printf("Entre com o nome: ");
    scanf("%s", p->nome);
    printf("Entre com o documento: ");
    scanf("%s", p->documento);
    printf("Entre com a idade: ");
    scanf("%d", &p->idade);
}

2. B)
void imprimirPessoa(Pessoa *p) {
    printf("Nome: %s\n", p->nome);
    printf("Documento: %s\n", p->documento);
    printf("Idade: %d\n", p->idade);
}

2. C)
void atualizarIdade(Pessoa *p, int novaIdade) {
    p->idade = novaIdade;
}

2. D)
void pessoaMaisNovaEMaisVelha(Pessoa pessoas[], int tamanho) {
    Pessoa maisNova = pessoas[0];
    Pessoa maisVelha = pessoas[0];
    for (int i = 1; i < tamanho; i++) {
        if (pessoas[i].idade < maisNova.idade) {
            maisNova = pessoas[i];
        }
        if (pessoas[i].idade > maisVelha.idade) {
            maisVelha = pessoas[i];
        }
    }
    printf("Pessoa mais nova: %s\n", maisNova.nome);
    printf("Pessoa mais velha: %s\n", maisVelha.nome);
}

