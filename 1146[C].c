#include <stdio.h>

int main(){
    int n,i,c =1;
    scanf("%d", &n);
    while(n != 0){
        if(n != 1){
        printf("%d ", c);
        for(i = 1; i < (n-1); i++){
            printf("%d ", (c + 1));
            c += 1;
        }
        printf("%d\n", n);
        c = 1;} else {
                    printf("%d\n", c);
        }
        scanf("%d", &n);
    }
    return 0;
}

