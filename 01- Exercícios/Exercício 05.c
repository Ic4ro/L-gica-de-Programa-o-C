#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	//Declarando Vari�veis.
	float salario;
	int salariosMinimos;
	
	//Solicitando Dados Para o Usu�ro.
	printf("Digite Seu Sal�rio: ");
	scanf("%f",&salario);
	
	//Calculando Dados Para o Usu�rio.	
	salariosMinimos = salario / 1412.00;
	
	//Exibindo Dados Para o Usu�rio.
	system("cls || clear");
	printf("\n=== Exibindo Resultados ===\n");
	printf("Sal�rio: %3.f \n",salario);
	printf("Sal�rios M�nimos: %i \n",salariosMinimos);
	
	return 0;


}
