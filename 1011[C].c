#include <stdio.h>

#define PI 3.14159

int main(){
    double raio, esfera;
    scanf("%lf", &raio);
    esfera = (4.0/3) * PI * (raio * raio * raio);
    printf("VOLUME = %.3lf\n", esfera);
    return 0;
}
