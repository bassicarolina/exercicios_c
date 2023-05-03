//Escrever um algoritmo que,
//dados um número inteiro i e três valores a, b e
//c, apresente os 3 números na ordem definida
//por i, como descrito abaixo:
//a) i = 1: os três valores em ordem crescente;
//b) i = 2: os três valores em ordem decrescente;
//c) i = 3: o maior valor deve ser apresentado no
//meio dos outros.

#include <stdio.h>in
void main ()
{
	
	int a, b, c, menor, meio, maior, i;
	
	printf ("Entre com o primeiro numero: ");
    scanf ("%d", &a);

    printf ("Entre com o segundo numero: ");
    scanf ("%d", &b);

    printf ("Entre com o terceiro numero: ");
    scanf ("%d", &c);



	printf ("\n\n[1] Crescente\n[2] Decrescente\n[3] Exibir o maior entre os demais\n\n");
	printf ("Entre com o codigo: ");
	scanf ("%d", &i);
	

	if ((a >= b) && (a >= c))
	{
		maior = a;
		
		if (b >= c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else
	{
		//if ((b >= a) && (b >= c))
		if (b >= c)
		{
			maior = b;
			
			if (a >= c)
			{
				meio = a;
				menor = c;
			}
			else
			{
				meio = c;
				menor = a;
			}
		}
		else
		{
			//c é o maior
			maior = c;
			
			if (a >= b)
			{
				meio = a;
				menor = b;
			}
			else
			{
				meio = b;
				menor = a;
			}
		}
	}
	
	switch (i)
	{
		case 1: printf ("\n%d %d %d", menor, meio, maior);
		        break;	
		        
		case 2: printf ("\n%d %d %d", maior, meio, menor);
		        break;	
		        
		case 3: printf ("\n%d %d %d", menor, maior, meio);
		        printf ("\n%d %d %d", meio, maior, menor);
	}	
}
