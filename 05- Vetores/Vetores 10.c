
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 5



int main () {
	setlocale(LC_ALL, "");
	
	//Declarando Variáveis.
	int numeros[TAM];
	int i;
	
	printf("Digite os numeros:\n");
	for (i = 0; i < TAM;i++) {
	printf("numeros %d: ", i + 1);
	scanf("%d", &numeros[i]); 
	
	
	
	if (numeros[i] < 0) {	
		numeros[i] = 0;
	
 }	
}
 
 //Exibindo Dados Para Usuário.
	printf("\nExibindo os números informadas: \n");
	for (i = 0;i < TAM; i++) {
		printf("%i° Números: %d\n", i+1, numeros[i]);
	
	}
	
	




  return 0;
}

