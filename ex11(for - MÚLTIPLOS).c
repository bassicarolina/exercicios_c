//Faça um programa que leia um número inteiro positivo N e exiba todos os múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário.

#include <stdio.h>

void main  ()
{
    int n1, n2, i;
    
    printf("Digite um número: ");
    scanf("%d", &n1); //DEFINE O INTERVALO, POIS OS NUMEROS DEVEM SER                   INFERIORES A n1
    
    printf("Digite outro número: ");
    scanf("%d", &n2); // NÚMERO DOS MÚLTIPLOS
    
    
        //exiba todos os múltiplos de n2 inferiores a n1
        printf("Os multiplos de %d são: ", n2);
        for(i=1; i<n1;i++)
            {
                if (i%n2==0)
                    {
                        printf("\n%d", i);
                    }
        
            }
    
}
