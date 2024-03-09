#include "contabancaria.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  ContaBancaria *conta1 = criaConta("João Silva", 15353, 1000.0);
  ContaBancaria *conta2 = criaConta("Maria Oliveira", 35322, 500.0);

  deposita(conta1, 500.0);
  deposita(conta2, 200.0);

  saca(conta1, 300000.0);
  saca(conta2, 100.0);

  transfere(conta1, conta2, 200);

  printf("Saldo da conta %d: %.2lf\n", conta1->numero, saldo(conta1));
  printf("Saldo da conta %d: %.2lf\n", conta2->numero, saldo(conta2));

  excluiConta(conta1);
  excluiConta(conta2);
  return 0;
}