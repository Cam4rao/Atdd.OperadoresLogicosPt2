#include<stdio.h>

int main(){

    float salarioAtual, novoSalario;
    int tempoServ;
    
    printf("Informe seu salario atual: ");
    scanf("%f", &salarioAtual);
    printf("Informe seu tempo de servico, em anos, na empresa: ");
    scanf("%d", &tempoServ);

    if((salarioAtual <= 0) || (tempoServ < 0)){
        printf("ERRO!");
    } else if(salarioAtual <= 500){
        if(tempoServ < 1){
            novoSalario = (salarioAtual * 0.25) + salarioAtual;
        } else if((tempoServ >= 1) && (tempoServ <= 3)){
            novoSalario = (salarioAtual * 0.25) + salarioAtual + 100;
        } else if((tempoServ >= 4) && (tempoServ <= 6)){
            novoSalario = (salarioAtual * 0.25) + salarioAtual + 200;
        } else if((tempoServ >= 7) && (tempoServ <= 10)){
            novoSalario = (salarioAtual * 0.25) + salarioAtual + 300;
        } else{
            novoSalario = (salarioAtual * 0.25) + salarioAtual + 500;
        }
    } else if((salarioAtual > 500) && (salarioAtual <= 1000)){
        if(tempoServ < 1){
            novoSalario = (salarioAtual * 0.2) + salarioAtual;
        } else if((tempoServ >= 1) && (tempoServ <= 3)){
            novoSalario = (salarioAtual * 0.2) + salarioAtual + 100;
        } else if((tempoServ >= 4) && (tempoServ <= 6)){
            novoSalario = (salarioAtual * 0.2) + salarioAtual + 200;
        } else if((tempoServ >= 7) && (tempoServ <= 10)){
            novoSalario = (salarioAtual * 0.2) + salarioAtual + 300;
        } else{
            novoSalario = (salarioAtual * 0.2) + salarioAtual + 500;
        }
    } else if((salarioAtual > 1000) && (salarioAtual <= 1500)){
        if(tempoServ < 1){
            novoSalario = (salarioAtual * 0.15) + salarioAtual;
        } else if((tempoServ >= 1) && (tempoServ <= 3)){
            novoSalario = (salarioAtual * 0.15) + salarioAtual + 100;
        } else if((tempoServ >= 4) && (tempoServ <= 6)){
            novoSalario = (salarioAtual * 0.15) + salarioAtual + 200;
        } else if((tempoServ >= 7) && (tempoServ <= 10)){
            novoSalario = (salarioAtual * 0.15) + salarioAtual + 300;
        } else{
            novoSalario = (salarioAtual * 0.15) + salarioAtual + 500;
        }
    } else if((salarioAtual > 1500) && (salarioAtual <= 2000)){
        if(tempoServ < 1){
            novoSalario = (salarioAtual * 0.1) + salarioAtual;
        } else if((tempoServ >= 1) && (tempoServ <= 3)){
            novoSalario = (salarioAtual * 0.1) + salarioAtual + 100;
        } else if((tempoServ >= 4) && (tempoServ <= 6)){
            novoSalario = (salarioAtual * 0.1) + salarioAtual + 200;
        } else if((tempoServ >= 7) && (tempoServ <= 10)){
            novoSalario = (salarioAtual * 0.1) + salarioAtual + 300;
        } else{
            novoSalario = (salarioAtual * 0.1) + salarioAtual + 500;
        }
    }

    printf("Seu novo salario e: R$%.2f.", novoSalario);

    return 0;
}