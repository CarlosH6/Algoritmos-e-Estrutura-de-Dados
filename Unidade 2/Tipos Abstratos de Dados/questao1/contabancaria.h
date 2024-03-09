#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef struct ContaBancaria {
  char *titular;
  int numero;
  double saldo;
} ContaBancaria;

ContaBancaria *criaConta(char *titular, int numero, double saldo);
void deposita(ContaBancaria *conta, double valor);
int saca(ContaBancaria *conta, double valor);
void transfere(ContaBancaria *contaOrigem, ContaBancaria *contaDestino, double valor);
double saldo(ContaBancaria *conta);
void excluiConta(ContaBancaria *conta);

#endif
