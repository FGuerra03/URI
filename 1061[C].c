#include <stdio.h>

int main(){
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    int ds1,ds2,dia,hora,minuto,segundo;

    scanf("%*s %d", &d1);
    scanf("%d %*s", &h1);
    scanf("%d %*s", &m1);
    scanf("%d", &s1);
    scanf("%*s %d", &d2);
    scanf("%d %*s", &h2);
    scanf("%d %*s", &m2);
    scanf("%d", &s2);

    ds1 = s1 + (m1 * 60) + (h1 * (60*60)) + (d1 * (24*60*60));
    ds2 = s2 + (m2 * 60) + (h2 * (60*60)) + (d2 * (24*60*60));

    int n;
    n = ds2-ds1;
    dia = n / 86400;
    n = n % 86400;
    hora = n / 3600;
    n = n % 3600;
    minuto = n / 60;
    segundo = n % 60;

    printf("%d dia(s)\n",dia);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",minuto);
    printf("%d segundo(s)\n",segundo);
    return 0;
}
