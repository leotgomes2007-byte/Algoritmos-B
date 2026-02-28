#include<stdio.h>
struct aluno{
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};
void lerAluno(struct aluno *p){
int  i;
    for(i = 0;i < 3;i++){

    printf("Nome:");
    fflush(stdin);
    gets(p->nome);
    printf("curso");
    fflush(stdin);
    gets(p->curso);
    printf("ano de ingresso:");
    scanf("%d",&p->anoIngresso);
    printf("previsão de formatura em:");
    scanf("%d", &p-> anoFormatura);
    return;
    }
}

int main(){
    struct aluno a[3];
    int i;
    for(i = 0;i < 3;i++){
    lerAluno(&a[i]);

    printf("Nome:%s\n",a[i].nome);

    printf("curso:%s\n",a[i].curso);

    printf("ano de ingresso:%d\n",a[i].anoIngresso);

    printf("previsão de formatura em:%d\n",a[i].anoFormatura);
    }
    return 0;
}
