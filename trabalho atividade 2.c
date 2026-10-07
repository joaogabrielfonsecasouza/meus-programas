#include <stdio.h> 
#include <math.h>

int main(){ 
    double A, B;
    double MEDIA;

    scanf("%lf %lf", &A, &B);

    MEDIA = ((A * 3.5) + (B * 7.5)) /11;

    printf("a media do aluno e %.5f\n", MEDIA);


    return 0;
}