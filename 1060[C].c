#include <stdio.h>

int main(){
    float n[7];
    int i = 0, qtd = 0;
    scanf("%f %f %f %f %f %f", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
    while (i < 6){
        if(n[i] > 0){
            qtd++;
        }
        i++;
    }
    printf("%d valores positivos\n", qtd);
    return 0;
}
