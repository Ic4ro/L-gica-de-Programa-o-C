
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 5



int main () {
	setlocale(LC_ALL, "");
	
	//Declarando Vari�veis.
	int numeros[TAM];
	int i, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	
	//Solicitando Dados Para o Usu�rio.
	printf("Digite os numeros:\n");
	for (i = 0; i < TAM;i++) {
		printf("numeros %d: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if (numeros[i] > maiorNumero) {
		maiorNumero = numeros[i];
    } 
    
    else if (numeros[i] < menorNumero) {
    	menorNumero = numeros[i];
	}
	
	
	
	}
	//Exibindo Dados Para o Usu�rio.
	printf("\nExibindo os numeros informadas: \n");
	for (i = 0;i < TAM; i++) {
		printf("numeros %d: %d\n", i+1, numeros[i]);
	}
	

	printf("Maior N�mero: %d \n", maiorNumero);
	printf("Menor N�mero: %d \n", menorNumero);

return 0;

	
}

