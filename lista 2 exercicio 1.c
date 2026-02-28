#include<stdio.h>

int idadeDias(int d, int m, int a) {
    return d + (m * 30) + (a * 365);
}

int main() {
    int dia, mes, ano, idadeF;

    printf("Informe a sua idade:(dia mes ano) ");
    scanf("%d %d %d", &dia, &mes, &ano);

    idadeF = idadeDias(dia, mes, ano);
    printf("A sua idade em dias eh %d", idadeF);

    return 0;
}
