#include <stdio.h>
#define Pi 3.14159
union angulo
        {
        float graus;
        float radianos;
        };
void main(void) {
   union angulo ang;
   float auxGrau;
   char op;
   printf("\nNumeros em graus (G) ou radianos (R)? ");
   scanf("%c",&op);
   printf("Digite o angulo: ");
   scanf("%f",&auxGrau);
   if (op == 'G') {
      printf("Angulo digitado em graus %f\n", auxGrau);
      ang.radianos = auxGrau/180*Pi;
      printf("\nAngulo em radianos: %f\n",ang.radianos);
   } else if (op == 'R') {
             printf("Angulo digitado em radianos %f\n", auxGrau);
             ang.graus = auxGrau*180/Pi;
             printf("\nAngulo em graus: %f\n",ang.graus);
          }
          else printf("\nEntrada invalida!!\n");
}
