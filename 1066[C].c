#include <stdio.h>

int main(){
    int a[6];
    int i,qtdp = 0,qtdi = 0,qtdps = 0,qtdn = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
        if(a[i] > 0){
            qtdps++;
        } else if (a[i] < 0){
            qtdn++;
        }
        if(a[i] % 2 == 0){
            qtdp++;
        } else {
            qtdi++;
        }
    }

    printf("%d valor(es) par(es)\n", qtdp);
    printf("%d valor(es) impar(es)\n", qtdi);
    printf("%d valor(es) positivo(s)\n", qtdps);
    printf("%d valor(es) negativo(s)\n", qtdn);

    return 0;
}
