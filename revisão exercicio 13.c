#include<stdio.h>
int main(){
int i,v[100],soma0=0,soma1=0,soma2=0;
    printf("Informe os resultados do experimento, se foram 0,1 ou 2\n");
        for(i=0;i<100;i++){
            printf("v[%d]=",i);
            scanf("%d",&v[i]);
            if(v[i]==0){
                soma0++;
            }
             if(v[i]==1){
                soma1++;
            }
             if(v[i]==2){
                soma2++;
            }
        }
    printf("Os resultados foram:\n");
    printf("%d resultados 0\n",soma0);
    printf("%d resultados 1\n",soma1);
    printf("%d resultados 2\n",soma2);
return 0;
}
