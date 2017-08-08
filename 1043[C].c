#include <stdio.h>

int main(){
    float a,b,c,perimetro,area_t;
    scanf("%f %f %f", &a, &b, &c);
    if(a < b + c && b < a + c && c < a + b){
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        area_t = ((a + b) * c)/2;
        printf("Area = %.1f\n", area_t);
    }

    return 0;
}
