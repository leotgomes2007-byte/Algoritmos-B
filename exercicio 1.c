#include<stdio.h>
int main(){
    float a,b,media;
    float *pa,*pb,*pmedia;
    //inicialização dos ponteiros
        pa=&a;
        pb=&b;
        pmedia=&media;

    printf("Informe um numero\n");
    scanf("%f",pa);
    printf("Informe outro numero\n");
    scanf("%f",pb);
    // media=(a+b)/2;
    *pmedia=(*pa+*pb)/2;

    printf("Média=%f",*pmedia);

return 0;

}
