//Faça um programa que leia 30 números reais. Ao final,
//devem ser exibidas as seguintes informações:
//a) A quantidade de valores negativos digitados;
//b) A média dos valores positivos.

#include <stdio.h>

void main ()
{
  int i, numero, mediaPositivo=0, negativoQuantidade=0, positivoSoma=0, positivoQuantidade=0;

  
    for (i=0; i<=30; i++);
      printf("Digite um número: ");
      scanf("%i", &numero);

        if (numero <0)
        {
          negativoQuantidade++;
        }
        else
        {
          positivoQuantidade++;
          mediaPositivo= positivoSoma/positivoQuantidade;
        }
  
}
