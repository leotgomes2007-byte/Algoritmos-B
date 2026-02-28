#include <stdio.h>
#include<math.h>
typedef struct {
int x;
int y;
}ponto;
int main(){
 ponto p1,p2;
float distancia;
    printf("Coordenadas x,y do ponto1:\n");
    scanf("%i%i",&p1.x,&p1.y);
    printf("coordenadas x,y do ponto 2:\n");
    scanf("%i%i",&p2.x,&p2.y);
    distancia=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("Distancia entre os pontos = %.2f\n",distancia);
return 0;
}
