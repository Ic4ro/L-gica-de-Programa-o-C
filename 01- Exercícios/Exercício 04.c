#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	//Declarando Vari�veis.
	int numero, antecessor, sucessor;
	
	//Solicitando Dados Para O Usu�ro.
	printf("Digite um N�mero: ");
	scanf("%i",&numero);
	
	//Calculando Dados Do Usu�rio
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	//Exibindo Dados Para usu�rio.
	system("cls || clear");
	printf("\n=== Exibindo Resultados ===\n");
	printf("N�mero: %i\n",numero);
	printf("Antecessor: %i\n",antecessor);
	printf("Sucessor: %i\n",sucessor);
	
	return 0;
	
}
