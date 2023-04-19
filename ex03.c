//As vendas parceladas se tornaram uma ótima opção para 
	//os lojistas que, a cada dia, criam novas promoções para tentar 
	//conquistar novos clientes. Faça um algoritmo que permita ao 
	//lojista informar o preço do produto e receber as seguintes 
	//informações:

	//a) O valor com 10% de desconto para pagamento à vista;
	//b) O valor da prestação para parcelamento sem juros, em 5x;
	//c) O valor da prestação para parcelamento com juros, em 10x, 
  //com 20% de acréscimo no valor do produto.


#include <stdio.h>

void main ()
{
	float preco, aVista, parc5x, parc10x;

	
	printf ("Preco: ");
	scanf ("%f", &preco);
	
	//calculando o valor da venda à vista
	//aVista = preco - (10/100)*preco;
	//aVista = preco - 0.1*preco;
	//aVista = preco*(1 - 0.1);
	
	aVista = preco*0.9;
	
	parc5x = preco/5;
	
	parc10x = (1.2*preco)/10;
	

	printf ("\n\nValor a vista: R$ %.2f", aVista);
	printf ("\nSem juros: 5 x R$ %.2f", parc5x);
	printf ("\nCom juros: 10 x R$ %.2f", parc10x);
}
