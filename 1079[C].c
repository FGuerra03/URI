#include<stdio.h>

int main(){
    int i,c;
    float n1,n2,n3;

    scanf("%d", &i);

    for(c = 0; c < i; c++){
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("%.1f\n", ((n1*2)+(n2*3)+(n3*5))/(2+5+3));
    }

    return 0;
}
