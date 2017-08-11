#include <stdio.h>

int main(){
    float a,n,media;
    int qtd, i;
    qtd = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &a);
        if(a > 0){
            media += a;
            qtd++;
        }
    }
    media /= qtd;

    printf("%d valores positivos\n", qtd);
    printf("%.1f\n", media);
    return 0;
}
