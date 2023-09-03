#include <stdio.h>

void ordenarDescendente(int *a, int *b, int *c) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b < *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Ordena de forma descendente
    ordenarDescendente(&A, &B, &C);
    printf("Valores em ordem descendente: %d, %d, %d\n", A, B, C);

    return 0;
}