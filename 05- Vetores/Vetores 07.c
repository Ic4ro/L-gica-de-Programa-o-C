
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 6



int main () {
	setlocale(LC_ALL, "");
	
	//Declarando Vari�veis.
	int numeros[TAM];
	int i, pares = 0, impares = 0;
	
	//Solicitando Dados Para o Usu�rio.
	printf("Digite os numeros:\n");
	for (i = 0; i < TAM;i++) {
		printf("numeros %d: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if (numeros[i] % 2 == 0) {
		pares++;
		} else { 
		impares++;
		}	
	
	
	}
	//Exibindo Dados Para o Usu�rio.
	printf("\nExibindo os numeros informadas: \n");
	for (i = 0;i < TAM; i++) {
		printf("numeros %d: %d\n", i+1, numeros[i]);
	}
	

	printf("Pares: %i\n", pares);
	printf("�mpares: %i\n", impares);
return 0;

	
}

