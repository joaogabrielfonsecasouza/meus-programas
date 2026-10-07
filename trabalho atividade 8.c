#include <stdio.h> 
#include <math.h>

int main() {
   int X;
   int soma = 0;
   
   printf("digite o valor\n");
   while (scanf("%d", &X) == 1) {

    soma = 0;

    for (int i = 1; i < X; i++) {
    
    if (X % i == 0) {
          soma = soma + i;
      }  
}
    if (soma == X) {
   printf("%d e perfeito\n", X); 
}
    if (soma != X) {
   printf("%d nao e perfeito\n", X);
  }
}
 
   



    return 0;
}