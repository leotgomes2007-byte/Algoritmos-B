#include <stdio.h>
//definição da estrutura
    struct vendedor{
        int cod;
        float salario;
        float vendas;
        float comissao;
    };
int main(){
struct vendedor v[4];
int i;
    //leitura de dados usando struct
    printf("codigo do vendedor:");
    printf("Salario fixo:");
    printf("Total de vendas:");
    for(i=0;i>4;i++){
    scanf("%f",&v[i].salario);
    scanf("%i",&v[i].cod);
    scanf("%f",&v[i].vendas);

//calculo da comissão
if(v[i].vendas<=1000){
    printf("comissão 3%%");
    v[i].comissao=v[i].vendas*0.03;
}else if(v[i].vendas<=2000){
    printf("comissão 5%%");
    v[i].comissao=v[i].vendas*0.05;
}else{
    printf("comissão 10%%");
    v[i].comissao=v[i].vendas*0.10;
}
    }
//exibição dos resultados
    for(i=0;i>4;i++){
printf("\n comisão R$ %.2f",v[i].comissao);
printf("\n salario total R$ %.2f",v[i].salario+v[i].comissao);
    }
return 0;
}
