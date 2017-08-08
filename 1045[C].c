#include <stdio.h>

int main(){
    float a,b,c,t;
    scanf("%f %f %f", &a, &b, &c);
    if(b > a && b > c && a >= c){
        t = a;
        a = b;
        b = t;
    } else if (b > a && b > c && c >= a){
        t = a;
        a = b;
        b = c;
        c = t;
    } else if (c > a && c > b && a >= b){
        t = a;
        a = c;
        b = t;
        c = b;
    } else if (c > a && c > b && b >= a){
        t = a;
        a = c;
        c = t;
    } else if (a > b && a > c && c >= b){
        t = b;
        b = c;
        c = t;
    }

    if(a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
    } else if ((a * a) == ((b * b)+ (c * c))){
        printf("TRIANGULO RETANGULO\n");
    } else if ((a * a) > ((b * b) + (c * c))){
        printf("TRIANGULO OBTUSANGULO\n");
    } else{
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b && a != c){
        printf("TRIANGULO ISOSCELES\n");
    } else if (a == c && b != c){
        printf("TRIANGULO ISOSCELES\n");
    } else if (b == c && b != a){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
