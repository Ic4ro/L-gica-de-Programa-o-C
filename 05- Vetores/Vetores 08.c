
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 2



int main () {
	setlocale(LC_ALL, "");
	
	//Declarando Vari�veis.
	int idades[TAM];
	int i;
	char nomes [TAM][200];
	
	//Solicitando Dados Para o Usu�rio.
	printf("=== Solicitando Dados Para Usu�rio ===\n");
	for (i = 0; i < TAM;i++) {
		printf("Digite o %i� nome: ", i+1);
		scanf("%s", &nomes[i]);
		
		printf("Digite a %i� idade: ", i+1);
		scanf("%d", &idades[i]);
		
	}

	//Exibindo Dados Para o Usu�rio.
	printf("\n==== Exibindo Dados Para o Usu�rio ===\n");
	for (i = 0;i < TAM; i++) {
	printf("%i� nome:  %s\n", i+1, nomes[i]);
	printf("%i� idade: %i \n\n", i+1, idades[i]);
	}

return 0;

}

