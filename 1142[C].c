#include <stdio.h>

int main(){
    int num, i, c = 0;
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        printf("%d %d %d PUM\n", (c + 1), (c + 2), (c + 3));
        c = c + 4;
    }
}
