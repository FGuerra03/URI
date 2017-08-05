#include <stdio.h>

int main (){
    float nota1, nota2, media;
    scanf("%f %f", &nota1, &nota2);
    nota1 = nota1 * 3.5;
    nota2 = nota2 * 7.5;
    media = (nota1 + nota2)/(3.5 + 7.5);
    printf("MEDIA = %.5f\n", media);

    return 0;
}
