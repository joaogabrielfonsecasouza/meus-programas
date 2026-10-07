#include <stdio.h> 
#include <math.h>

int main() {
   int N;
   int primeiro = 0;
   int segundo = 1;
   int soma;
   
   printf("digite o valor\n");
   scanf("%d", &N);
   

   for (int i = 0; i < N; i++) {
    printf("%d", primeiro);

    if (i < N - 1) {
    printf(" ");
}

    soma = primeiro + segundo;
    primeiro = segundo;
    segundo = soma;

}
  


    return 0;
}