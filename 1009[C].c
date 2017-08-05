#include <stdio.h>

int main(){
    char nome[21];
    float salario;
    double vendas, total;
    scanf("%s %f %lf", &nome, &salario, &vendas);
    total = (vendas * 0.15) + salario;
    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
