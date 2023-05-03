//Joãozinho investiu Q reais em
//uma aplicação com rendimento fixo de R% ao
//mês. Pede-se a implementação de um
//programa que calcule o valor (e exiba-o)
//disponível na conta de Joãozinho após A anos
//de investimento.

#include <stdio.h>

void main() 
{
    float valorInvestido, taxaMensal, rendimentoMensal,rendimentoAnual;
    int ano, periodo;


  printf("Qual o valor investido: ");
  scanf("%f", &valorInvestido);

  printf("Qual o valor da taxa (em porcentagem): ");
  scanf("%f", &taxaMensal);  

  printf("Qual o tempo investido (em anos): ");
  scanf("%d", &ano);

  rendimentoMensal= (taxaMensal/100);
  periodo = 12*ano;
  rendimentoAnual = valorInvestido*periodo*rendimentoMensal;

    printf("\nValor disponível na conta após %d anos de investimento: R$ %.2f\n", ano, rendimentoAnual);
}
