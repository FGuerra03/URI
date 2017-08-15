#include <stdio.h>

int main(){
    int x, m, e;
    scanf("%d %d", &x, &m);

    while (x != 0 && m != 0){
        e = x * m;
        printf("%d\n", e);
        scanf("%d %d", &x, &m);
    }

    return 0;
}
