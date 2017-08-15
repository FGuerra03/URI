#include <stdio.h>
#include <math.h>
int main(){
    double num, r1, r2, r3, p1, p2;
    double fibonacci;
    scanf("%lf", &num);

    r1 = (1 + sqrt(5))/2;
    r2 = (1 - sqrt(5))/2;
    r3 = sqrt(5);

    p1 = pow(r1,num);
    p2 = pow(r2,num);

    fibonacci = (p1 - p2)/r3;

    printf("%.1lf\n", fibonacci);

    return 0;
}
