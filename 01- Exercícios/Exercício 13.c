#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Vari�veis.
	char sexo;
	float peso, altura;
	
	printf("Digite Seu Sexo: ");
	scanf("%c",&sexo);
	
	printf("Digite Sua Altura: ");
	scanf("%f",&altura);

	sexo = toupper(sexo); //Converte em Mai�sculo
	
	
	switch (sexo) {
		case 'M':
			peso = (72.7 * altura) - 58;
			printf("=== Exibindo Resultados ===\n");
			printf("Peso Ideal �: %.2f \n", peso);
			break;
			
		case 'F':
			peso = (62.1 * altura) - 44.7;
			printf("Peso Ideal �: %.2f \n",peso);
			break;	
		default:
			printf("Sexo Indefinido");		
	}
	return 0;
	

	
	}
