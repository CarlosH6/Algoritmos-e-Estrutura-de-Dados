1. X é 3, Y é 4, P é 4

2. A) De erro
   B) Porque o P é um ponteiro que não foi atribuido adequadamente
   C) Não
   D)
#include <stdio.h>
int main(void) {
int x, *p;
         x = 100;
         p = &x;
         printf("Valor de p = %p\tValor de *p = %d", p, *p);
        return 0;
}
      E) Sim

3. 11 20 10 30

4.       
#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = ((3 * pow(l, 2) * sqrt(3))/2);
    *perimetro = 6 * l;
}

int main() {
    float lado, area, perimetro;
    printf("Digite o lado do hexágono: ");
    scanf("%f", &lado);
    calcula_hexagono(lado, &area, &perimetro);
    printf("Área do hexágono: %f\n", area);
    printf("Perímetro do hexágono: %f\n", perimetro);
    return 0;
}
