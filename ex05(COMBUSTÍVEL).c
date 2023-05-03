//Desenvolva um algoritmo que
//calcule o consumo de combustível de um
//automóvel em determinada viagem. Para isso,
//devem ser obtidos: 
//i) o percurso (emquilômetros) da viagem; 
//ii) o número de quilômetros que o carro percorre 
//com um litro de combustível (km/l); 
//iii) o preço do litro do combustível.
//Ao final, o algoritmo deve determinar:
//-A quantidade de combustível, em litros,
//consumida durante a viagem;
//-O custo total de combustível.

#include <stdio.h>	
void main ()
{
	float distancia, kmlitro , preco, consumo, custo;
	
	//obtendo os dados de entrada
	printf ("Distancia: ");
	scanf ("%f", &distancia);
	
	printf ("km/l: ");
	scanf ("%f", &kmlitro);
	
	printf ("Preco do combustivel total: ");
	scanf ("%f", &preco);
	

	consumo = distancia/kmlitro;
	

	custo = consumo*preco;
	

	printf ("\n\nConsumo: %.1f litros", consumo);
	printf ("\nCusto: R$ %.2f", custo);
}
