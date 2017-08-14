#include <stdio.h>

int main(){
    int i,n[10],a;
    scanf("%d", &a);
    n[0] = a;
    printf("N[0] = %d\n", a);

    for(i = 0; i < 9; i++){
        n[i+1] = (n[i]+n[i]);
        printf("N[%d] = %d\n", (i+1),n[i+1]);
    }

    return 0;
}
