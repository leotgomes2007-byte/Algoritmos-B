#include <stdio.h>
#include <stdlib.h> // Para atoi()

struct data {
    int dia, mes, ano;
};

int main() {
    int i;
    char data_str[2][11]; // Espaço para "dd/mm/aaaa" + '\0'
    struct data d[2];

    for(i = 0; i < 2; i++) {
        printf("Informe a data %d no formato (dd/mm/aaaa): ", i+1);
        scanf("%10s", data_str[i]); // Lê a data como string

        // Extrai dia, mês e ano usando atoi()
        char temp[3];

        // Dia (posições 0 e 1)
        temp[0] = data_str[i][0];
        temp[1] = data_str[i][1];
        temp[2] = '\0';
        d[i].dia = atoi(temp);

        // Mês (posições 3 e 4)
        temp[0] = data_str[i][3];
        temp[1] = data_str[i][4];
        d[i].mes = atoi(temp);

        // Ano (posições 6 a 9)
        temp[0] = data_str[i][6];
        temp[1] = data_str[i][7];
        temp[2] = data_str[i][8];
        temp[3] = data_str[i][9];
        temp[4] = '\0';
        d[i].ano = atoi(temp);
    }

    // Comparação das datas
    if(d[0].ano < d[1].ano) {
        printf("A primeira data ocorre primeiro\n");
    } else if(d[0].ano > d[1].ano) {
        printf("A segunda data ocorre primeiro\n");
    } else {
        if(d[0].mes < d[1].mes) {
            printf("A primeira data ocorre primeiro\n");
        } else if(d[0].mes > d[1].mes) {
            printf("A segunda data ocorre primeiro\n");
        } else {
            if(d[0].dia < d[1].dia) {
                printf("A primeira data ocorre primeiro\n");
            } else if(d[0].dia > d[1].dia) {
                printf("A segunda data ocorre primeiro\n");
            } else {
                printf("As datas sao iguais\n");
            }
        }
    }

    return 0;
}
