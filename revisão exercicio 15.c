#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x1, x2, delta;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        printf("Não existem raízes reais (delta < 0).\n");
    }

    return 0;
}
