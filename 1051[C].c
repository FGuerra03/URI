#include <stdio.h>

int main(){
    float salario, salario_t, salario_t1;
    scanf("%f", &salario);
    if(salario <= 2000){
        printf("Isento\n");
    } else {
        if(salario > 2000 && salario <= 3000){
            salario = (salario - 2000) * 0.08;
            printf("R$ %.2f\n", salario);
        }
        if(salario > 3000 && salario <= 4500){
            salario_t = salario;
            salario_t1 = salario_t - 3000;
            salario_t = salario_t - salario_t1;
            salario_t = salario_t - 2000;
            salario_t *= 0.08;
            salario = salario - 3000;
            salario *= 0.18;
            salario += salario_t;
            printf("R$ %.2f\n", salario);
        }
        if(salario > 4500){
            salario_t = 1000 * 0.08;
            salario_t1 = 1500 * 0.18;
            salario -= 4500;
            salario *= 0.28;
            salario = salario + salario_t + salario_t1;
            printf("R$ %.2f\n", salario);
        }
    }

    return 0;
}
