#include <stdio.h>

int main() {
    int i;
    float v1[20], v2[20], a[20], s[20], m[20], d[20];

    // Input for vector 1
    printf("Informe os elementos do vetor 1:\n");
    for(i = 0; i < 20; i++) {
        printf("Elemento %d: ", i);
        scanf("%f", &v1[i]);
    }

    // Input for vector 2
    printf("\nInforme os elementos do vetor 2:\n");
    for(i = 0; i < 20; i++) {
        printf("Elemento %d: ", i);
        scanf("%f", &v2[i]);
    }

    // Perform operations
    for(i = 0; i < 20; i++) {
        a[i] = v1[i] + v2[i];  // Addition
        s[i] = v1[i] - v2[i];  // Subtraction
        m[i] = v1[i] * v2[i];  // Multiplication

        // Division with zero-check
        if(v2[i] != 0) {
            d[i] = v1[i] / v2[i];
        } else {
            d[i] = 0;  // Handle division by zero
            printf("Aviso: Divisão por zero detectada no elemento %d\n", i);
        }
    }

    // Print results
    printf("\nResultados:\n");

    printf("\nAdição:\n");
    for(i = 0; i < 20; i++) {
        printf("%.2f\n", a[i]);  // %.2f prints with 2 decimal places
    }

    printf("\nSubtração:\n");
    for(i = 0; i < 20; i++) {
        printf("%.2f\n", s[i]);
    }

    printf("\nMultiplicação:\n");
    for(i = 0; i < 20; i++) {
        printf("%.2f\n", m[i]);
    }

    printf("\nDivisão:\n");
    for(i = 0; i < 20; i++) {
        printf("%.2f\n", d[i]);
    }

    return 0;
}
