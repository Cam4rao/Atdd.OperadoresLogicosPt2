#include<stdio.h>

int main(){

    float prova1, prova2, prova3, mediaPonderada;
    int peso1 = 1, peso2 = 1, peso3 = 2;

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &prova3);

    mediaPonderada = ((prova1 * peso1) + (prova2 * peso2) + (prova3 * peso3) / (peso1 + peso2 + peso3));

    printf("A media ponderada das notas e: %.2f", mediaPonderada);
    if(mediaPonderada >= 7){
        printf("\nAPROVADO!");
    } else{
        printf("\nREPROVADO!");
    }
    
    return 0;
}