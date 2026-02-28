#include<stdio.h>
#include<stdlib.h>
int main(){
int v[10],*p,i,t[10],*q;
int r[10],*s;

p=v;
q=t;
s=r;
for(i=0;i<10;i++){
    *(p+i)=rand()%10;
    *(q+i)=rand()%15;
    printf("%d\t%d\n",*(p+i),*(q+i));
}
printf("soma dos vetores:\n");
for(i=0;i<10;i++){
    *(s+i)=*(p+i)+*(q+i);
    printf("%d\n",*(s+i));
}
return 0;
}
