#include <stdio.h>
 float calculo(float p, float per){
    return p*per;
 }

int main(){
float preco,percentual,desconto;
    printf("Informe o preço do produto:");
    scanf("%f",&preco);
    printf("Informe o percentual de desconto(Em decimal):");
    scanf("%f",&percentual);

    desconto=calculo(preco,percentual);
    printf("O desconto foi de %.2f",desconto);
return 0;
}
