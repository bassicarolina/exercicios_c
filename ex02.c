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
	
	float pesoTerra, pesoPlaneta;
	int num;
	
	
	printf ("Entre com o peso da pessoa na Terra: ");
	scanf ("%f", &pesoTerra);
	


	printf ("[1] Mercurio\n[2] Venus\n[3] Marte\n");
	printf ("[4] Jupiter\n[5] Saturno\n[6] Urano\n\n");

	
	printf ("Entre com o numero do planeta: ");
	scanf ("%d", &num);

	

	if (num == 1)
		{
		pesoPlaneta = (pesoTerra/10) * 0.37;
		printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
		}

	else
		{
		if (num == 2)
		{
			pesoPlaneta = (pesoTerra/10) * 0.88;
			printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
		
		}
		else
			{
				
				if (num == 3)
				{
				pesoPlaneta = (pesoTerra/10) * 0.38;
				printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
				}

			else
				{
				if (num == 4)
					{
					pesoPlaneta = (pesoTerra/10) * 2.64;
					printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
					}

				else
					{
					if (num == 5)
						{
						pesoPlaneta = (pesoTerra/10) * 1.15;
						printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
						}

					else
						{
						pesoPlaneta = (pesoTerra/10) * 1.17;
						printf ("\nPeso no planeta escolhido: %.2f\n", pesoPlaneta);
					}
				}
			}
		}
	}	
}
