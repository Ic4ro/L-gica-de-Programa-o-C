#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	//Declarando Vari�veis.
	int numero;

	//Solicitando Dados Para Usu�rio.
	printf("Digite um N�mero: ");
	scanf("%i",&numero);

	//Exibindo Dados Para Usu�rio.
	printf("\n=== Exibindo Resultados ===\n");
	if (numero % 2 == 0) {
		printf("Par.");
	} else {
		printf("�mpar.");
	}
	
	return 0;
}

