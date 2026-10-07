#include <stdio.h> 
#include <math.h>

int main(){ 
    float nota1, nota2, nota3;
    float media;

    printf("digite as notas");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("a media das notas e %.1f" , media);

    return 0;
}