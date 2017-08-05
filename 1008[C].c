#include <stdio.h>

int main(){
    int funcionario, horasT;
    float valor, salario;
    scanf("%d %d %f", &funcionario, &horasT, &valor);
    salario = horasT * valor;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
