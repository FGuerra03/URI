#include <stdio.h>

int main(){
    int i,c;
    scanf("%d", &i);
    int num[i];
    for (c = 0; c < i; c++){
        scanf("%d", &num[c]);
        if(num[c] % 2 == 0 && num[c] > 0){
            printf("EVEN POSITIVE\n");
        } else if(num[c] % 2 == 0 && num[c] < 0){
            printf("EVEN NEGATIVE\n");
        } else if(num[c] % 2 != 0 && num[c] > 0){
            printf("ODD POSITIVE\n");
        } else if (num[c] % 2 != 0 && num[c] < 0){
            printf("ODD NEGATIVE\n");
        } else {
            printf("NULL\n");
        }
    }
    return 0;
}
