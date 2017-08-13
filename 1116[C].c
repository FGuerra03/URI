#include <stdio.h>

int main(){
    int i,c;
    int num1,num2;
    float div;
    scanf("%d", &i);
    for(c = 0; c < i; c++){
        scanf("%d %d", &num1, &num2);
        if(num2 == 0){
            printf("divisao impossivel\n");
        } else {
            div = ((float)num1)/((float)num2);
            printf("%.1f\n", div);
        }
    }

    return 0;
}
