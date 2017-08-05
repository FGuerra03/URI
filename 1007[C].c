#include <stdio.h>

int main(){
    int valor1, valor2, valor3, valor4, diferenca;
    scanf("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);
    diferenca = (valor1 * valor2 - valor3 * valor4);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
