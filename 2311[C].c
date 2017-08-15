#include <stdio.h>

int main(){
    int num,i,j;
    char nome[20];
    float dificuldade, nota_f, aux;
    float n[8];

    scanf("%d", &num);
    while(num--){
        scanf("%s", &nome);
        scanf("%f", &dificuldade);

        for(i = 0; i < 7; i++){
            scanf("%f", &n[i]);
        }

        for(i = 0; i < 7; i++){
            for(j=i+1; j < 7; j++){
                if(n[i] > n[j]){
                    aux = n[i];
                    n[i] = n[j];
                    n[j] = aux;
                }
            }
        }
        nota_f = (n[1] + n[2] + n[3] + n[4] + n[5]) * dificuldade;
        printf("%s %.2f\n", nome, nota_f);
    }


    return 0;
}
