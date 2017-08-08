#include <stdio.h>

int main(){
    int id, qtd;
    float valor, valor_total;
    scanf("%d %d", &id, &qtd);
    if(id == 1) {
        valor = 4.00;
        valor_total = qtd * valor;
        printf("Total: R$ %.2f\n", valor_total);
    } else if (id == 2){
        valor = 4.50;
        valor_total = qtd * valor;
        printf("Total: R$ %.2f\n", valor_total);
    } else if (id == 3){
        valor = 5.00;
        valor_total = qtd * valor;
        printf("Total: R$ %.2f\n", valor_total);
    } else if (id == 4){
        valor = 2.00;
        valor_total = qtd * valor;
        printf("Total: R$ %.2f\n", valor_total);
    } else {
        valor = 1.50;
        valor_total = qtd * valor;
        printf("Total: R$ %.2f\n", valor_total);
    }
    return 0;
}
