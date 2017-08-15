#include <stdio.h>

int main(){
    int p;
    scanf("%d", &p);
    while (p != 0){
        if(p % 2 == 0){
            p = p + (p+2) + (p+4) + (p+6) + (p+8);
        } else {
            p++;
            p = p + (p+2) + (p+4) + (p+6) + (p+8);
        }

        printf("%d\n", p);
        scanf("%d", &p);
    }

    return 0;
}
