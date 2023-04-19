//01: O IMC (Índice de Massa Corporal)
//é um critério da Organização Mundial de Saúde
//para dar uma indicação sobre a condição de
//peso de uma pessoa adulta. A fórmula é:
//IMC = peso / altura2 
//Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condição de acordo com a tabela abaixo:
//IMC em adultos Condição
//IMC < 18,5 Abaixo do peso
//18,5 ≤ IMC < 25,0 Peso ideal
//25,0 ≤ IMC < 30,0 Sobrepeso
//30,0 ≤ IMC < 35,0 Obesidade grau I
//35,0 ≤ IMC < 40,0 Obesidade grau II
//IMC ≥ 40,0 Obesidade grau III




#include <stdio.h>

void main()

{
    float peso,altura,imc;


printf("Digite o seu peso (em kg): ");
scanf("%f", &peso);

printf("Digite a sua altura (em metros): ");
scanf("%f", &altura);


imc = peso / (altura * altura);

printf("IMC = %f", imc);


    if (imc < 18.5) 
        {
            printf("Condição: abaixo do peso");
        }

    else if (imc < 25)
        {
            printf("Condição: peso ideal");
        }

    else if (imc < 30) 
        {
            printf("Condição: sobrepeso");
        }

    else if (imc < 35) 
        {
            printf("Condição: obesidade grau I");
        }

    else if (imc < 40) 
        {
            printf("Condição: obesidade grau II");
        }

    else 
        {
            printf("Condição: obesidade grau III\n");
        }

}

