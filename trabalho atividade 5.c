#include <stdio.h> 
#include <math.h>

int main() {
   double A;
   double B;
   double C;
   double aux;
   
   printf("valor de um lado\n");
    scanf("%lf" , &A);

   printf("valor de um lado\n");
    scanf("%lf" , &B);

   printf("valor de um lado\n");
    scanf("%lf" , &C);

    
    if (B > A) {
    aux = A;
    A = B;
    B = aux;
}
    
    if (C > A) {
    aux = A;
    A = C;
    C = aux;
}
    
    if (C > B) {
    aux = C;
    C = B;
    B = aux;
}
   

   if(A >= B + C)
   	printf("NAO FORMA TRIANGULO");
   else { 
    if(pow(A, 2) == pow(B, 2) + pow(C, 2))
    printf("TRIANGULO RETANGULO\n");

    if(pow(A, 2) > pow(B, 2) + pow(C, 2))
    printf("TRIANGULO OBTUSANGULO\n");
    
    if (pow(A, 2) < pow(B, 2) + pow(C, 2))
    printf("TRIANGULO ACUTANGULO\n");

    if (A == B && B == C)
    printf("TRIANGULO EQUILATERO\n");

    if  ((A == B && B != C) ||
    (A == C && A != B) ||
    (B == C && A != B)) 
    printf("TRIANGULO ISOSCELES\n");
}






    return 0;
}