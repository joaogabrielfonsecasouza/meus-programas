#include <stdio.h> 
#include <math.h>

int main() {
    double notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int quantidade;
    double valor;

    scanf("%lf", &valor);

    printf("NOTAS:\n");

    for (int i = 0; i < 6; i++) {
    quantidade = valor / notas[i];
    valor = valor - (notas[i]*quantidade);

    
    printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i]);
}

    printf("MOEDAS:\n");

    for (int i = 0; i < 6; i++) {
    quantidade = valor / moedas[i];
    valor = valor - (moedas[i]*quantidade);

    printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i]);
}
    
    
    




    return 0;
}