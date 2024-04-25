#include <stdio.h>

#define flag 0

int main()
{
    //all rights reserved to sevak®
    
    printf("Fatorial\n");
    
    double numero;
    
    printf("\nDigite um numero qualquer para calcular seu fatorial(0 para encerrar o programa): ");
        scanf(" %lf", &numero);
    
    while(numero!=flag){
        double resultado=1;
        for(int i = 1; i <= numero; i++){
            resultado *= i;
        }
        printf("%.0lf! = %.0lf\n", numero,resultado);
        printf("\nDigite um numero qualquer para calcular seu fatorial: ");
            scanf(" %lf", &numero);
    }
    
    printf("\nSaindo do programa...\n\nObrigado por usar nosso programa!");
    
    return 0;
}
