#include <stdio.h> 
#include <math.h>

int main(){ 
    double A, B, C;
    double delta;
    double R1, R2;
    
    
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - 4 * A * C;
    

    printf("O valor de delta e %lf\n", delta);
    


    if (delta < 0) {
        printf("impossivel calcular\n");
    

    }else if (A == 0)
        printf("imposivel calcular\n");
    

    else{ 
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A); 
        
         printf("o valor de R1 e %1f\n", R1);
         printf("o valor de R2 e %1f\n", R2);
       
         printf("possivel calcular\n");   
    }     
    

    return 0;
}