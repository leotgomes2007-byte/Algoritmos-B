#include<stdio.h>
int main (){
char p[30],*pi,*pf,aux;

pi=pf=p;

printf("palavra:");
scanf("%s", p);

for(;*pf;pf++){
    pf--;
}
for(;pi<pf;pi++,pf--){
    aux=*pf;
    *pf=*pi;
    *pi=aux;
}
printf("Palavra Invertida: %s",p);


return 0;
}
