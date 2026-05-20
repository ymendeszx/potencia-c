#include <stdio.h>
#include "function_potencia.c"

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    long long resultado = potencia(base, expoente);
    printf("%d^%d = %lld\n", base, expoente, resultado);

    printf("Criado por Marcelo Mendes");
    return 0;
}
