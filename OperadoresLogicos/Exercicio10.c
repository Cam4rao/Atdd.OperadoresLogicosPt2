#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2, delta;

    printf("digite o valor de a: ");
    scanf("%lf", &a);

    printf("digite o valor de b: ");
    scanf("%lf", &b);

    printf("digite o valor de c: "); 
    scanf("%lf", &c);
    
    delta = (b * b) - (4 * a * c);

    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);

    if (delta > 0)
    {
        printf ("As raizes sao: %lf, %lf", x1, x2);
    } else if (delta = 0)
    {
        printf ("A raiz unica eh: %lf",x1);
    } else {
        printf ("Nao possui raiz");
    }
    return 0; 
}