#include <stdio.h> 
#include <math.h>

int main(){ 
    float raio;
    float pi = 3.14;
    float area;

    printf("digite o valor do raio");
    scanf("%f" , &raio);

    area = pi * pow(raio, 2);
    
    printf("a area do circulo e: %2.f\n", area);
    

    return 0;
}