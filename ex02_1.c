//Escrever um algoritmo que obtenha o peso de uma pessoa 
//na Terra e o número de um planeta. Ao final, com auxílio da tabela 
//abaixo, calcular o peso desta pessoa no planeta escolhido.

//Número	Planeta 	Gravidade Relativa g
// 1		Mercúrio	0,37
// 2		Vênus	 	0,88
// 3		Marte		0,38
// 4		Júpiter		2,64
// 5		Saturno		1,15
// 6		Urano		1,17



#include <stdio.h>	
void main ()
{
	float pesoTerra, pesoPlaneta, gravidade;
	int num;

	printf ("Entre com o peso da pessoa na Terra: ");
	scanf ("%f", &pesoTerra);
	
	printf ("[1] Mercurio\n[2] Venus\n[3] Marte\n");
	printf ("[4] Jupiter\n[5] Saturno\n[6] Urano\n\n");
	
	printf ("Entre com o numero do planeta: ");
	scanf ("%d", &num);

		
	switch (num)
	{
		case 1: gravidade = 0.37;
		        break;
		        
		case 2: gravidade = 0.88;
		        break;
		        
		case 3: gravidade = 0.38;
		        break;
		        
		case 4: gravidade = 2.64;
				break;
				
		case 5: gravidade = 1.15;
		        break;
		        
		case 6: gravidade = 1.17;
		        //break;
	}	

	
	pesoPlaneta = (pesoTerra/10) * gravidade;
	

	printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
}
