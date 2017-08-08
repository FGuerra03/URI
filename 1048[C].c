#include <stdio.h>

int main(){
    float s, r, sf;
    int rp;
    scanf("%f", &s);
    if(s > 0 && s <= 400){
        sf = (s * 0.15) + s;
        r = sf - s;
        rp = 15;
        printf("Novo salario: %.2f\n", sf);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %d %%\n",rp );
    } else if(s > 400 && s <= 800){
        sf = (s * 0.12) + s;
        r = sf - s;
        rp = 12;
        printf("Novo salario: %.2f\n", sf);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %d %%\n",rp );
    } else if(s > 800 && s <= 1200){
        sf = (s * 0.10) + s;
        r = sf - s;
        rp = 10;
        printf("Novo salario: %.2f\n", sf);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %d %%\n",rp );
    } else if(s > 1200 && s <= 2000){
        sf = (s * 0.07) + s;
        r = sf - s;
        rp = 7;
        printf("Novo salario: %.2f\n", sf);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %d %%\n",rp );
    } else if(s > 2000){
        sf = (s * 0.04) + s;
        r = sf - s;
        rp = 4;
        printf("Novo salario: %.2f\n", sf);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %d %%\n",rp );
    }
    return 0;
}
