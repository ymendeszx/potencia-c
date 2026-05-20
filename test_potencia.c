#include <stdio.h>
#include "function_potencia.c"

int main() {
    printf("Testando potencia:\n");

    printf("2^2 = %lld\n", potencia(2, 2));   // Esperado: 4
    printf("3^3 = %lld\n", potencia(3, 3));   // Esperado: 27
    printf("4^4 = %lld\n", potencia(4, 4));   // Esperado: 256
    printf("5^5 = %lld\n", potencia(5, 5));   // Esperado: 3125

    printf("Criado por Marcelo Mendes");
    return 0;
}
