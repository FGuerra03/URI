#include <stdio.h>

int main(){
 int resp;
 do{
    float nota1, nota2,a,b;
    float media;
    scanf("%f", &a);
    while(a < 0 || a > 10){
        printf("nota invalida\n");
        scanf("%f", &a);
    }
    if(a >= 0 && a <= 10){
        nota1 = a;
    }

    scanf("%f", &b);
    while(b < 0 || b > 10){
        printf("nota invalida\n");
        scanf("%f", &b);
    }
    if(b >= 0 && b <= 10){
        nota2 = b;
    }

    media = ((nota1+nota2)/2);
    printf("media = %.2f\n", media);

    do{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &resp);
    if(resp == 2){
        break;
    }
    } while(resp != 1);
    } while (resp == 1);
    return 0;
}

