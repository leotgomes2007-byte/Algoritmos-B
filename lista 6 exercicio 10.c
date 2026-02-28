#include<stdio.h>
void teste(int *m1, int *m2){
    int r[3][3];
    int i,j;
    printf("resultado:\n");
    for(i = 0;i < 3; i++ ){
        for(j = 0;j < 3; j++ ){
    r[i][j] = *(m1+(i * 3 + j)) + *(m2+(i * 3 + j));
    printf("%d \t\n",r[i][j]);
        }
    }
}

int main (){
int i,j,matriz1[3][3],matriz2[3][3];

    printf("informe uma matriz 3x3");
    for(i = 0;i < 3; i++ ){
        for(j = 0;j < 3; j++ ){
            printf("matriz1[%d][%d]:",i,j);
            scanf("%d", &matriz1[i][j]);

        }
    }
    printf("informe outra matriz 3x3");
    for(i = 0;i < 3; i++ ){
        for(j = 0;j < 3; j++ ){
            printf("matriz2[%d][%d]:",i,j);
            scanf("%d", &matriz2[i][j]);

        }
    }

teste(matriz1,matriz2);

return 0;
}
