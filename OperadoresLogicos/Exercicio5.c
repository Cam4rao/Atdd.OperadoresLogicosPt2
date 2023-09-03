#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("O número é igual a 5.\n");
    } else if (numero == 200) {
        printf("O número é igual a 200.\n");
    } else if (numero == 400) {
        printf("O número é igual a 400.\n");
    } else if (numero >= 500 && numero <= 1000) {
        printf("O numero esta no intervalo entre 500 e 1000.\n");
    } else {
        printf("O numero nao se encaixa em nenhum dos escopos anteriores.\n");
    }

    return 0;
}