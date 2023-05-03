//Faça um programa que exiba na tela os 50 primeiros
//termos da seguinte forma:
//série: 1, -2, 3, -4, 5, -6 ...


#include <stdio.h>
void main ()
{
  int i, numero=1;

  for(i=1; i<=50; i++)
    printf("%d", numero);
}
