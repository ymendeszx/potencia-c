#ifndef FUNCTION_POTENCIA_C
#define FUNCTION_POTENCIA_C

// Calcula base^expoente usando multiplicacao (sem usar operador de potencia)
long long potencia(int base, int expoente) {
    if (expoente == 0) return 1;

    long long resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

#endif
