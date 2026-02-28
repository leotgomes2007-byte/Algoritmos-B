#include <stdio.h>
//definição da estrutura
    struct vendedor{
        int cod;
        float salario;
        float vendas;
        float comissao;
    };
int main(){
struct vendedor v;
    //leitura de dados usando struct
    printf("codigo do vendedor:");
    scanf("%i",&v.cod);
    printf("Salario fixo:");
    scanf("%f",&v.salario);
    printf("Total de vendas:");
    scanf("%f",&v.vendas);
//calculo da comissão
if(v.vendas<=1000){
    printf("comissão 3%%");
    v.comissao=v.vendas*0.03;
}else if(v.vendas<=2000){
    printf("comissão 5%%");
    v.comissao=v.vendas*0.05;
}else{
    printf("comissão 10%%");
    v.comissao=v.vendas*0.10;
}
//exibição dos resultados
printf("\n comisão R$ %.2f",v.comissao);
printf("\n salario total R$ %.2f",v.salario+v.comissao);
return 0;
}
