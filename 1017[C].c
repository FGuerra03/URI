#include <stdio.h>

int main(){
    int horas, km;
    float dist,combustivel;

    scanf("%d %d", &horas, &km);
    dist = horas * km;
    combustivel = dist / 12;
    printf("%.3f\n", combustivel);
    return 0;
}
