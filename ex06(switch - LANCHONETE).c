//O cardápio de uma lanchonete é
//o seguinte:
//Especificação Código Preço
//Cachorro quente 100 3,50
//Bauru simples 101 4,50
//Bauru com ovo 102 5,20
//Hamburger 103 3,00
//Cheeseburger 104 4,00
//Refrigerante 105 2,50
//Escrever um algoritmo que obtenha o código
//do item pedido, a quantidade e calcule o valor
//a ser pago.
//Considere que, a cada execução do algoritmo,
//somente será calculado o valor relacionado a
//um item.

#include <stdio.h>

void main ()
{
	int codigo, quantidade;
	float valor, custo;

	printf("Especificacao\tCodigo\tPreco\n");
	printf("Cachorro quente\t100\t3,50\n");
	printf("Bauru simples\t101\t4,50\n");
	printf("Bauru com ovo\t102\t5,20\n");
	printf("Hamburger\t103\t3,00\n");
	printf("Cheeseburger\t104\t4,00\n\n");

	printf ("Entre com o codigo: ");
	scanf ("%d", &codigo);
	
	printf ("Entre com a quantidade: ");
	scanf ("%d", &quantidade);
	

	switch (codigo)
	{
		case 100: valor = 3.50;
		          break;
		          
		case 101: valor = 4.50;
		          break;
		          
		case 102: valor = 5.20;
		          break;
		          
		case 103: valor = 3.00;
		          break;
		          
		case 104: valor = 4.00;
		          break;
		          
		case 105: valor = 2.50;
		          //break;		          
	}


	custo = valor * quantidade;
	
	printf ("\n\nValor da compra: R$ %.2f", custo);
}
