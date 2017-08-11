#include <stdio.h>

int main(){
    int i, num;
    i = 2;
    scanf("%d", &num);
    printf("%d^2 = %d\n", i,(i * i));
    while (num >= (i + 2)){
        i += 2;
        printf("%d^2 = %d\n", i,(i * i));
    }
}
