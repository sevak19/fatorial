#include <stdio.h>

int main()
{
    //all rights reserved to sevak®
    
    printf("Fatorial\n");
    
    double numero;
    double resultado=1;
   
    printf("Digite um numero qualquer para calcular seu fatorial e de todos os numeros menores que ele: ");
    scanf(" %lf", &numero);
    
    for(int i = 1; i <= numero; i++){
      resultado *= i;
      printf("%i! = %.0lf\n", i,resultado);
    }
    
    
    return 0;
}
