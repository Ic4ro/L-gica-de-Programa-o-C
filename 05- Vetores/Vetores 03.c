
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 3


int main () {
	setlocale(LC_ALL, "");
	
	//Declarando Vari�veis.
	float notas[TAM];
	int i;
	
	//Solicitando Dados Para o Usu�rio.
	printf("Digite as notas.\n");
	for (i = 0; i < TAM;i++) {
		printf("Notas %d: ", i + 1);
		scanf("%f", &notas[i]);
		
	}
	
	
	//Exibindo dados de um vetor em um la�o de repeti��o.
	printf("\nExibindo as notas informadas: \n");
	for (i = 0;i < TAM; i++) {
		printf("Notas %d: %.1f\n", i+1, notas[i]);
	}
	
	return 0;
}

