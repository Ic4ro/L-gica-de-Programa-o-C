#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	//Declarando Vari�veis.
	char bandas[3] [200];
	char integrantes[3][5] [250];
	int i, j; 
	
	//Solicitando dados para usu�rio.
	printf("===Solicitando Dados Para Usu�rio === \n");
	for(i = 0; i < 3; i++) {
	printf("Digite o nome da %i� banda: ", i+1);
	gets(bandas[i]);
			
		printf("\n");
		
	for (j = 0; j < 5; j++) {
	printf("Digite o nome do %i� integrante: ", j + 1);
	gets(integrantes[i][j]);
  }
}
	
	
	//Exibindo dados para usu�rio.
	system("cls||clear");
	printf("\n === Exibindo dados para o usu�rio === \n");	
	for(i = 0; i < 3; i++) {
	printf("%d� Bandas Musicais: %s \n", i+1, bandas[i]);
		
	for (j = 0; j < 5; j++) {
	printf("%d� Integrantes: %s \n", j+1, integrantes[i][j]);
	}
			
	printf("\n");
	
	}
	
	
  
  return 0;
 }

