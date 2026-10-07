#include <stdio.h> 
#include <math.h>

int main() {
   int X;
   int divisores = 0;
   

   printf("digite o valor\n");
   while (scanf("%d", &X) == 1) {

    divisores = 0;


    for (int i = 1; i < X; i++) {
    
    if (X % i == 0) {
        divisores++;
      }
}
    if (divisores > 1) {
   printf("%d nao e primo\n", X); 
}
    if (divisores == 1){
   printf("%d e primo\n", X);
  }
}
 
   

    return 0;
}