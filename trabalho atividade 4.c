#include <stdio.h> 
#include <math.h>

int main() {
    int x;
    int y;
    int soma = 0;

    scanf("%d %d" , &x, &y);

    for (int i = x; i <= y; i++){
    if (i % 2 != 0) {
        soma = soma + i;
        }
    }
    
    printf("%d\n", soma); 


    



    return 0;
}