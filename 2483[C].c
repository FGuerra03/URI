#include <stdio.h>

int main(){
    char n[1000000];
    int c;
    long int i;

    scanf("%li", &i);

    n[0] = 'F';
    n[1] = 'e';
    n[2] = 'l';
    n[3] = 'i';
    n[4] = 'z';
    n[5] = ' ';
    n[6] = 'n';
    n[7] = 'a';
    n[8] = 't';
    n[9] = 'a';

    printf("%c%c%c%c%c%c%c%c%c", n[0],n[1],n[2],n[3],n[4],n[5],n[6],n[7],n[8]);

    for(c = 1; c <= i; c++){
        n[9 + c] = 'a';
    }

    for(c = 9; c < (9+i); c++){
        printf("%c", n[c]);
    }
    printf("l!\n");


    return 0;
}
