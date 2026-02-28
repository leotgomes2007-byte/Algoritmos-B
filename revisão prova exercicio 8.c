#include<stdio.h>

// Versão Iterativa com expoentes negativos
float potencia_iterativa_completa(int x, int n){
    float resultado = 1;
    int i;
    int expoente_absoluto = (n < 0) ? -n : n;

    for(i = 0; i < expoente_absoluto; i++){
        resultado *= x;
    }

    // Se expoente for negativo, inverte o resultado
    if(n < 0){
        resultado = 1.0 / resultado;
    }

    return resultado;
}

// Versão Recursiva com expoentes negativos
float potencia_recursiva_completa(int x, int n){
    // Caso base
    if(n == 0){
        return 1;
    }
    // Caso recursivo para expoente positivo
    else if(n > 0){
        return x * potencia_recursiva_completa(x, n - 1);
    }
    // Caso recursivo para expoente negativo
    else{
        return 1.0 / potencia_recursiva_completa(x, -n);
    }
}

int main(){
    int base, expoente;
    float resultado_iterativo, resultado_recursivo;

    printf("=== CALCULADORA DE POTENCIACAO COMPLETA ===\n");
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    // Calcula usando ambas as abordagens
    resultado_iterativo = potencia_iterativa_completa(base, expoente);
    resultado_recursivo = potencia_recursiva_completa(base, expoente);

    printf("\nResultados:\n");
    printf("Versao Iterativa: %d^%d = %.4f\n", base, expoente, resultado_iterativo);
    printf("Versao Recursiva: %d^%d = %.4f\n", base, expoente, resultado_recursivo);

    return 0;
}
