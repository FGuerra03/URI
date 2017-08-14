#include <stdio.h>

int main(){
    int a, qtd, c, r, s;
    c = 0;
    r = 0;
    s = 0;
    char t;
    scanf("%d", &a);

    while(a--){
        scanf("%d %c", &qtd, &t);
        if(t == 'C'){
            c = c + qtd;
        } else if(t == 'R'){
            r = r + qtd;
        } else if(t == 'S'){
            s = s + qtd;
        }
    }
    printf("Total: %d cobaias\n", (c+r+s));
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (c*100.0)/(c+s+r));
    printf("Percentual de ratos: %.2f %%\n", (r*100.0)/(c+s+r));
    printf("Percentual de sapos: %.2f %%\n", (s*100.0)/(c+r+s));

    return 0;
}
