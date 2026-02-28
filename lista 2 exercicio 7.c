#include<stdio.h>
    float calculoPercentual(float c, float f){
    return (f/c)*100;
    }

int main(){
float carga,faltas,percentual;
    printf("Informe a carga horaria da materia:");
    scanf("%f",&carga);

    printf("Informe a quantidade de faltas do aluno:");
    scanf("%f",&faltas);

    percentual=calculoPercentual(carga,faltas);
    printf("O percentual de faltas do aluno informado eh %.2f %%",percentual);
return 0;
}
