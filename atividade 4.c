#include <stdio.h> 
#include <math.h>

int main(){ 
    char nome1[50], nome2[50], nome3[50], nome4[50], nome5[50];
    float nota1, nota2, nota3, nota4, nota5;

    scanf("%s %s %s %s %s" , nome1, nome2, nome3, nome4, nome5);
    scanf("%f %f %f %f %f" , &nota1, &nota2, &nota3, &nota4, &nota5);

    printf("ALUNO(A)        NOTA\n");
    printf("========        ====\n");
    printf("%-10s      %.1f\n", nome1, nota1);
    printf("%-10s      %.1f\n", nome2, nota2);
    printf("%-10s      %.1f\n", nome3, nota3);
    printf("%-10s      %.1f\n", nome4, nota4);
    printf("%-10s      %.1f\n", nome5, nota5);

    


    return 0;
}