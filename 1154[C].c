#include <stdio.h>

int main(){
    int idade, aux, qtd;
    float media;
    aux = 0;
    qtd = 0;

    scanf("%d", &idade);

    while(idade > 0){
        aux += idade;
        qtd++;
        scanf("%d", &idade);
    }
    media = (float) aux/qtd;
    printf("%.2f\n", media);

    return 0;
}
