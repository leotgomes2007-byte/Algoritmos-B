#include<stdio.h>

    void lerVetor(int *p){
    int i=0;
    while(i<10){
        printf("Informe:");
        scanf("%d",(p+i));
        i++;
    }
    return ;
    }

        void lerMatriz(int *pm){
        int i,j,k;
        for(i = 0;i < 3;i++){
            for(j = 0;j < 3;j++){
        printf("m[%d][%d]",i,j);
        k=i*3+j;
        scanf("%d",pm+k);
        }
        }
        return 0;
        }

            void mostrarMatriz(int *pm){
            int i,j,k;
            for(i = 0;i < 3;i++){
                for(j = 0;j < 3;j++){
            printf("m[%d][%d]:",i,j);
            k=i*3+j;
            printf("%d\t",*pm+k);
            }
            printf("\n");
            }
            return;
            }

    int main(){
    int v[10],m[3][3];

    lerVetor(v);
    lerMatriz(m);
    mostrarMatriz(m);

    return 0;
    }
