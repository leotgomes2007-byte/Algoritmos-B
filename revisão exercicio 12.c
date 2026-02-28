#include <stdio.h>

int main() {
    char nome[100], data[11], login[20];
    int dia, mes, ano, i = 0, j = 0;

    printf("Nome completo: ");
    scanf(" %[^\n]", nome);

    printf("Data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Pega as iniciais (primeira letra de cada nome)
    login[j++] = (nome[0] >= 'a' && nome[0] <= 'z') ? nome[0] - 32 : nome[0];
    for(i = 1; nome[i] != '\0'; i++) {
        if(nome[i-1] == ' ' && nome[i] != ' ') {
            login[j++] = (nome[i] >= 'a' && nome[i] <= 'z') ? nome[i] - 32 : nome[i];
        }
    }

    // Adiciona ano e semestre (1 ou 2)
    sprintf(login + j, "%d%d", ano, (mes <= 6) ? 1 : 2);

    printf("Login: %s\n", login);
    return 0;
}
