#include <stdio.h>
int main(){
int i,n;
    printf("Informe um numero:\n");
    scanf("%d",&n);
    for(i=n;i<1000;i++){
        if(i%2==1)
            printf("%d\n",i);
    }
return 0;
}
