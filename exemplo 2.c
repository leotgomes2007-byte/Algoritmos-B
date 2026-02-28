#include<stdio.h>
#include<stdlib.h>
int *alocarVetor(int tam){
    int *p;
    p = (int*)malloc (tam*sizeof(int));
    if(!p){
        printf("Erro na alocação!!");
        exit(-1);
    }
    return p;
    }

void somarVetores(int *x, int *y, int *z, int t){
    int i;

    for(i = 0; i < t; i++){
        *(z + i) = *(x + i) + *( y + i);
        //z[i] = x[i] + y[i];
    }
    return;
}

void lerVetor(int *v, int t){
    int i;
    for(i = 0; i < t; i++){
        printf("%d:",i);
        scanf("%d",v + i);
    }
return;
}

void mostrarVetor(int *v, int t){
    int i;
    for(i = 0;i < t;i++){
        printf("%d\t",*(v + i));
    }
return;
}
int main (){
int *a, *b, *c, tam;

printf("tam:");
scanf("%d",&tam);

a = alocarVetor(tam);
b = alocarVetor(tam);
c = alocarVetor(tam);

lerVetor(a, tam);
lerVetor(b, tam);

somarVetores(a,b,c,tam);

mostrarVetor(c,tam);
free(a);
free(b);
free(c);

return 0;
}
