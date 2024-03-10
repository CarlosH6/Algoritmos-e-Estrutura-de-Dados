#include "contabancaria.h"
#include <stdio.h>
#include <stdlib.h>

ContaBancaria *criaConta(char *titular, int numero, double saldo) {
  ContaBancaria *novaConta = (ContaBancaria *)malloc(sizeof(ContaBancaria));

  novaConta->titular = titular;
  novaConta->numero = numero;
  novaConta->saldo = saldo;

  return novaConta;
}

void deposita(ContaBancaria *conta, double valor) { conta->saldo += valor; }
int saca(ContaBancaria *conta, double valor) {
  if (conta->saldo >= valor) {
    conta->saldo -= valor;
    return 1;
  } else {
    return 0;
  }
}

void transfere(ContaBancaria *contaOrigem, ContaBancaria *contaDestino,
               double valor) {
  if (contaOrigem->saldo >= valor) {
    saca(contaOrigem, valor);
    deposita(contaDestino, valor);
  }
}

double saldo(ContaBancaria *conta) { return conta->saldo; }

void excluiConta(ContaBancaria *conta) { free(conta); }