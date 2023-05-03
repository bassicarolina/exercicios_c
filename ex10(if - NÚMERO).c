//Implementar um programa que leia um valor
//inteiro n1. Se este não estiver no intervalo de
//100 a 999, uma mensagem deve ser exibida ao
//usuário informando que o número é inválido e,
///em seguida, a execução do programa terminará.
//Caso o valor esteja no intervalo definido, o

//programa deverá criar um novo valor n2 (e exibi-lo ao final) contendo os mesmos algarismos de

//n1, porém em ordem crescente.
//Exemplos:
//n1 514
//n2 145
//n1 929
//n2 299
//n1 124
//n2 124
//Nota:
//Como definido no enunciado, n1 consiste em umnúmero 
//inteiro positivo, com 3 algarismos. n2 também será um único número!


#include <stdio.h>

void main() 
{
    int n1, n2, cent, dez, uni, resto, maior, menor, meio;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
        if ((n1<=100) || (n1>=999))
            {
                printf("Número inválido!");
            }
        else 
            {
                printf("Número válido!\n");
                
                //DECOMPONDO
                cent=n1/100; //DIVIDIR O NUMERO POR CEM PRA ACHAR A         CENTENA
                resto=n1%100; //RESTO DA DIVISÃO DA CENTENA
                dez=resto/10; //DIVIDIR O RESTO POR DEZ PRA ACHAR A         DEZENA
                uni=resto%10; //RESTO DA DIVISÃO DA DEZENA
                            //UNIDADE=RESTO
      
        
                //determinar quem é maior, o menor e o do meio.
                //CENTENA MAIOR QUE A DEZENA A E UNIDADE
                    if ((cent>dez) && (cent>uni))
                        {
                            maior=cent;
                            if (dez>uni)
                                {
                                    meio=dez;
                                    menor=uni;
                                }
                            else
                                {
                                    meio=uni;
                                    menor=dez;
                                }
                        }
                //DEZENA MAIOR QUE A CENTENA E A UNIDADE
                    else
                        {
                            if ((dez>cent) && (dez>uni))
                                {
                                    maior=dez;
                                    if (cent>uni)
                                        {
                                            meio=cent;
                                            menor=uni;
                                        }
                                    else
                                        {
                                            meio=uni;
                                            menor=cent;
                                        }
                                }
                        }
                //UNIDADE MAIOR QUE A CENTENA E A UNIDADE
                    if ((uni>cent) && (uni>dez))
                        {
                            maior=uni;
                            if (cent>dez)
                                {
                                    meio=cent;
                                    menor=dez;
                                }
                            else
                                {
                                    meio=dez;
                                    menor=cent;
                                }
                        }
                        
            }
                //MONTAR n2 CRESCENTE
                    n2= menor*100 + meio*10 + maior;
        
                        printf("%d",n2);
    
}
