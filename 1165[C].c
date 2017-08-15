#include <stdio.h>

int main(){
    int num, v, test, i;
    test = 0;
    scanf("%d", &num);

    while(num--){
        scanf("%d", &v);

        for(i = 1; i <= v; i++){
            if(v % i == 0){
                test += 1;
            }
        }

        if(test == 2 && v != 1){
            printf("%d eh primo\n", v);
        } else{
            printf("%d nao eh primo\n", v);
        }

        test = 0;
    }

    return 0;
}
