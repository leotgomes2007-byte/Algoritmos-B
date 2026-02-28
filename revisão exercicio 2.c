#include<stdio.h>
int main (){
int i;
float salario[10],nsalario[10];
    for(i=0;i<10;i++){
        printf("informe o salario do funcionario %d:\n",i);
        scanf("%f",&salario[i]);
        }
    for(i=0;i<10;i++){
        if(salario[i]<=10000){
            nsalario[i]=salario[i]+(salario[i]*0.2);
        }else if(salario[i]>=1000 && salario[i]<=25000){
            nsalario[i]=salario[i]+(salario[i]*0.06);
            }else{
            nsalario[i]=salario[i]+(salario[i]*0.03);
            }
    }
    for(i=0;i<10;i++){
     printf("O funcionario %d, recebia %.2f, mas depois do reajuste começou a receber %.2f\n",i,salario[i],nsalario[i]);
    }
return 0;
}
