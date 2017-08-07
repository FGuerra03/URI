#include <stdio.h>

int main(){
    int a,b,c;
    int maior_ab, maior_f;
    scanf("%d %d %d", &a, &b, &c);
    maior_ab = (a + b + abs(a-b))/2;
    maior_f = (maior_ab + c + abs(maior_ab - c))/2;
    printf("%d eh o maior\n", maior_f);
    return 0;
}
