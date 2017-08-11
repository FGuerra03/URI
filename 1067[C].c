#include <stdio.h>

int main(){
    int i, num;
    i = 1;
    scanf("%d", &num);
    printf("%d\n", i);
    while(num >= (i + 2)){
        i += 2;
        printf("%d\n", i);
    }
    return 0;
}
