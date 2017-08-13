#include <stdio.h>

int main(){
    int senha, teste;
    senha = 2002;
    while (senha != teste){
        scanf("%d", &teste);
        if (senha != teste){
            printf("Senha Invalida\n");
        }else {
            printf("Acesso Permitido\n");
        }
    }

    return 0;
}
