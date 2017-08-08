#include <stdio.h>

int main(){
    int hora_i,hora_f,hora_t;
    scanf("%d %d", &hora_i, &hora_f);
    if (hora_i == hora_f){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if (hora_i > hora_f){
        hora_t = 24 - abs(hora_i - hora_f);
        printf("O JOGO DUROU %d HORA(S)\n", hora_t);
    } else {
        hora_t = abs(hora_i - hora_f);
        printf("O JOGO DUROU %d HORA(S)\n", hora_t);
    }

    return 0;
}
