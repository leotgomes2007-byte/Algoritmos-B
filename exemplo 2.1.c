#include<stdio.h>

int main(){
    int i=100;
    int *p1, *p2;

    p1=&i;
    p2=p1;

    printf("%p %p\n",p1,p2);

    *p2= *p2*4;//i=i*4;
    printf("%d %d",*p1,*p2);

return 0;

}
