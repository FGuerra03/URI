#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    nota1 = nota1 * 2;
    nota2 = nota2 * 3;
    nota3 = nota3 * 5;
    media = (nota1 + nota2 + nota3)/(2 + 3 + 5);
    printf("MEDIA = %.1f\n", media);

    return 0;
}
