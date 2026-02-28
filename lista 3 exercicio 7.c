#include <stdio.h>

int calcularDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    int totalDias1 = ano1 * 360 + mes1 * 30 + dia1;
    int totalDias2 = ano2 * 360 + mes2 * 30 + dia2;

    if (totalDias1 > totalDias2) {
        return totalDias1 - totalDias2;
    } else {
        return totalDias2 - totalDias1;
    }
}

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("=== CALCULO DE DIAS ENTRE DATAS ===\n");
    printf("Considerando meses de 30 dias\n\n");

    // Primeira data
    printf("Primeira data:\n");
    printf("Dia (1-30): ");
    scanf("%d", &dia1);
    printf("Mes (1-12): ");
    scanf("%d", &mes1);
    printf("Ano: ");
    scanf("%d", &ano1);

    // Segunda data
    printf("\nSegunda data:\n");
    printf("Dia (1-30): ");
    scanf("%d", &dia2);
    printf("Mes (1-12): ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    // Calcular e exibir resultado
    int dias = calcularDias(dia1, mes1, ano1, dia2, mes2, ano2);
    printf("\nDias entre %02d/%02d/%04d e %02d/%02d/%04d: %d dias\n",
           dia1, mes1, ano1, dia2, mes2, ano2, dias);

    return 0;
}
