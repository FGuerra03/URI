#include <stdio.h>

int main(){
    int n, gol1, gol2, qtd, inter, gremio, empate;
    qtd = 0;
    inter = 0;
    gremio = 0;
    empate = 0;
    do{
        scanf("%d %d", &gol1, &gol2);
        qtd++;
        if(gol1 > gol2){
            inter++;
        } else if(gol1 < gol2){
            gremio++;
        } else {
            empate++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
    } while(n == 1);

    printf("%d grenais\n", qtd);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if (inter > gremio){
        printf("Inter venceu mais\n");
    } else if (inter < gremio) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
