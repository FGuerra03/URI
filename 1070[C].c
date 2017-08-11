#include <stdio.h>

int main(){
    int num, i;
    scanf("%d", &num);

    if(num % 2 != 0){
        printf("%d\n", num);
    } else {
        printf("%d\n", (num + 1));
    }
    for(i = 0; i < 6; i++){
        if(num % 2 != 0){
            for(i = 0; i < 5; i++){
                num += 2;
                printf("%d\n", num);
            }
        } else {
            num++;
                for(i = 0; i < 5; i++){
                    num += 2;
                    printf("%d\n", num);
                }
            }
    }

    return 0;
}
