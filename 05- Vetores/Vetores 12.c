
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 6

  
int main () {
	setlocale (LC_ALL, "");
  
  //Declarando Vari�veis.
  int numeros[TAM], positivos = 0, negativos = 0, pares = 0, impares = 0, qntdNumInseridos;
  int i;
  
  //Solicitando Dados Para o Usu�rio.
	printf("Digite os N�meros: \n");
	for (i = 0; i < TAM;i++) {
	printf("Digite os %i� N�meros: ", i+1);
	scanf("%d", &numeros[i]); 


	if (numeros[i] % 2 == 0) {
		pares++;
	} 	else { 
		impares++;
	}	
		
	if (numeros[i] < 0){
		negativos++;	
	}	else if (numeros[i] > 0) {
		positivos++;
	}
	
	qntdNumInseridos++;
	
	
}
	//Exibindo Dados Para o Usu�rio.
	printf("\nExibindo os numeros informadas: \n");
	for (i = 0;i < TAM; i++) {
		printf("N�meros %d: %d\n", i+1, numeros[i]);
	}
	
	printf("\n===Exibindo Resultados.\n");
	printf("Pares: %i\n", pares);
	printf("�mpares: %i\n", impares);
	printf("Positivos: %i\n", positivos);
	printf("Negativos: %i\n", negativos);
	printf("Quantidade de N�meros Inseridos: %i\n", qntdNumInseridos);

	
	return 0;
}

