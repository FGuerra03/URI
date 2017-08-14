#include <stdio.h>
int main(){
    int num1,num2,i, c = 0;
    scanf("%d%d", &num1, &num2);
    if(num1 < num2)
    {
        for(i = num1; i <= num2; i++)
        {
            if(i % 13 == 0) continue;
            c+=i;
        }
    }
    else if(num1 > num2)
    {
        for(i = num2; i <= num1; i++)
        {
            if(i % 13 == 0) continue;
            c+=i;
        }
    }
    printf("%d\n",c);
    return 0;
}
