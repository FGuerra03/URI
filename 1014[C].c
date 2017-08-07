#include <stdio.h>

int main(){
    int km;
    float combustivel, consumo;
    scanf("%d %f", &km, &combustivel);
    consumo = km/combustivel;
    printf("%.3f km/l\n", consumo);

    return 0;
}
