//Faça um programa que, dadas duas datas (cada
//qual com dia, mês e ano) fornecidas pelo
//usuário, determine qual delas é a mais recente.

#include <stdio.h>

void main ()
{
        int data1, data2, mes1, mes2, ano1, ano2;
    
    printf("Digite a primeira data: ");
    scanf ("%d", &data1);
    
    printf("Digite o primeiro mes: ");
    scanf ("%d", &mes1);
    
    printf("Digite o primeiro ano: ");
    scanf ("%d", &ano1);
    
        printf ("%d", data1);
        printf ("/%d", mes1);
        printf ("/%d", ano1);
     
     
     
    printf("\nDigite a segunda data: ");
    scanf ("%d", &data2);
    
    printf("Digite o segundo mes: ");
    scanf ("%d", &mes2);
    
    printf("Digite o terceiro ano: ");
    scanf ("%d", &ano2);
    
     printf ("%d", data2);
     printf ("/%d", mes2);
     printf ("/%d", ano2);
     
     
     
        if (ano1 > ano2)
            {
               printf ("%d", data1);
                printf ("/%d", mes1);
                printf ("/%d", ano1); 
            }
            
        //ano igual, mes diferente
        else 
            if (mes1>mes2)
            {
                printf ("%d", data1);
                printf ("/%d", mes1);
                printf ("/%d", ano1);
            }
            
            //ano igual, mes igual, dia diferente
            else
                if (data1>data2)
                {
                    printf ("%d", data1);
                    printf ("/%d", mes1);
                    printf ("/%d", ano1); 
                }
                
                else 
                {
                    printf ("%d", data2);
                    printf ("/%d", mes2);
                    printf ("/%d", ano2);
                }

    
}
