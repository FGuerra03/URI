#include <stdio.h>

int main(){
    int id1, id2, qtd1, qtd2;
    double valor1, valor2, valor_f;

    scanf("%d %d %lf", &id1, &qtd1, &valor1);
    scanf("%d %d %lf", &id2, &qtd2, &valor2);

    valor_f = ((qtd1 * valor1) + (qtd2 * valor2));
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_f);

    return 0;
}
