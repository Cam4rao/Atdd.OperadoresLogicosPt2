#include<stdio.h>

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero informado e par.");
    }

    return 0;
}