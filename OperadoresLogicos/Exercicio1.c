#include <stdio.h>
#include <math.h>

int main(){
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >=0)
    {
        float raizQuadrada = sqrt(numero);
        printf("A raiz quadrada do nuemro eh: %.2f\n", raizQuadrada);
    } else {
        float quadrado = numero * numero;
        printf("O quadrado di numero eh: %.2f\n", quadrado);
    }
    return 0; 
}