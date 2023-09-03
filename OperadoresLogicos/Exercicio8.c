#include<stdio.h>

int main(){

    int idd, tempoServ;

    printf("Informe sua idade: ");
    scanf("%d", &idd);
    printf("Informe seu tempo de servico, em anos, na empresa: ");
    scanf("%d", &tempoServ);

    if((idd <= 0) || (tempoServ < 0)){
        printf("");
    } else if((idd >= 65) || (tempoServ >= 30) || ((idd >= 60) && (tempoServ >=25))){
        printf("Voce pode se aposentar!");
    } else{
        printf("Voce nao pode se aposentar!");
    }

    return 0;
}