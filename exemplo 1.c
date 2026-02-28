#include<stdio.h>
#include<stdlib.h>
int main (){
int *x,i;

printf("Quantidade de bytes do int: %d", sizeof(char));

//alocação dinamica de memoria
x = (int *) malloc(5 * sizeof(int));
if(!x){
    printf("Erro na alocação!!");
    exit(-1);
}
for(i = 0; i < 5;i++){
    *(x + i) = rand()%10;
    printf("x[%d] = %d\n",i,*(x + i));
}
//deslocar memoria
free(x);


return 0;
}
