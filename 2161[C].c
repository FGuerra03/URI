#include <stdio.h>

int main(){
    int num;
    double resp;
    resp = 0.0;
    scanf("%d", &num);
    while(num--){
        resp += 6.0;
        resp = 1.0/resp;
    }
    resp += 3.0;

    printf("%.10lf\n", resp);

    return 0;
}
