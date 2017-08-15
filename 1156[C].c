#include <stdio.h>

int main(){
    float a,b,s;
    int i;

    s = 0;
    b = 1;

    for(a = 1; a <= 39; a+=2){
        s += (a/b);
        b *= 2;
    }


    printf("%.2f\n", s);
    return 0;
}
