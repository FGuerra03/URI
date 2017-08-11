#include <stdio.h>

int main(){
    int a[6], qtd = 0, i;
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(i = 0; i < 5; i++){
        if(a[i] % 2 == 0){
            qtd++;
        }
    }
    printf("%d valores pares\n", qtd);
    return 0;
}
