//Construir um programa que permita ao usuário
//calcular a área de uma figura geométrica.
//Para isto, o usuário deverá escolher a figura desejada:
//([C]írculo, [R]etângulo, [Q]uadrado ou [T]riângulo) 
//e fornecer as informações necessárias para que a 
//área desta figura possa ser calculada.
//Notas:
//1. Fórmulas para o cálculo das áreas:
//a. Acírculo = π.raio2 onde π = 3.14159;
//b. Aretângulo = base.altura;
//c. Aquadrado = lado2;
//d. Atriângulo = (base.altura)/2.
//2. Caso o usuário escolha uma opção inválida,
//uma mensagem de erro deve ser exibida e a
//execução do programa terminada.

#include <stdio.h>

void main ()
{
        int num;
        float areaCir, areaRet, areaQua, areaTri, r, lado, altura, base;
        
    
    
    printf("\n[1]Círculo\n[2]Retângulo\n[3]Quadrado\n[4]Triângulo"
            "\nDentre as opçoes acima escolha uma: ");
    scanf("%i", &num);
    
        
    
switch (num)
	{
		case 1: 
		        printf("Digite o Raio: ");
		        scanf("%f", &r);
		        
		        areaCir = (3.14159*r*r);
		        printf("A area é igual a: %.2f", areaCir);
		        
		        break;
		        
		case 2: 
		        printf("Digite o altura: ");
		        scanf("%f", &altura);
		        printf("Digite a base: ");
		        scanf("%f", &base);
		        
		        areaRet = (base*altura);
		        printf("A area é igual a: %.2f", areaRet);
		        
		        break;
		        
		case 3: 
		        printf("Digite o lado: ");
		        scanf("%f", &lado);
		        
		        areaQua = (lado*lado);
		        printf("A area é igual a: %.2f", areaQua);
		        
		        break;
        
        case 4:
                printf("Digite o altura: ");
		        scanf("%f", &altura);
		        printf("Digite a base: ");
		        scanf("%f", &base);
		        
		        areaTri = (base*altura)/2;
		        printf("A area é igual a: %.2f", areaTri);
    
	}   
}
