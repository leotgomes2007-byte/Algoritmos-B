#include<stdio.h>
int potencia(int x,int y){
    if(y==0)
    return 1;
    else if(y>0)
        return x*potencia(x,y-1);
}

int main (){
    int base,expoente,r;
    printf("Base:\n");
    scanf("%d",&base);
    printf("expoente:\n");
    scanf("%d",&expoente);

    r=potencia(base,expoente);
    printf("%d^%d=%d\n",base,expoente,r);

return 0;
}
