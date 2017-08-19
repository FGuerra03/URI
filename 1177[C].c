#include <stdio.h>
int main(){
    int N[1000], T, i,c;
    scanf ("%d", &T);
    for(i = 0,c = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n",i,c);

        c++;

        if(c == T){
            c = 0;
        }
    }
    return 0;
}
