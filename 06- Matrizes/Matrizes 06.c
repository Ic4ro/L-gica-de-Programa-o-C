#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	//Declarando Vari�veis.
	char disciplina[3] [200];
	float nota[3][2], media[3], soma = 0;
	int i, j; 
	
	//Solicitando dados para usu�rio.
	printf("===Solicitando Dados Para Usu�rio === \n");
	for(i = 0; i < 3; i++) {
	printf("Digite o nome da %i� disciplina: ", i+1);
	scanf("%s", &disciplina[i]);
		
	for (j = 0; j < 2; j++) {
	printf("Digite a %i� nota: ", j + 1);
	scanf("%f", &nota[i][j]);
		
	soma += nota[i][j];
	}
	media[i] = soma / 2;
	soma = 0;
		
		
	}
	//Exibindo dados para usu�rio.
	printf("\n === Exibindo dados para o usu�rio === \n");	
	for (i = 0; i < 3; i++) {
		printf("%d� disciplinas: %s \n", i+1, disciplina[i]);
			
	for (j = 0; j < 2; j++) {
		printf("%d� nota: %.1f \n", j+1, nota[i][j]);
	}
	printf("M�dia: %.1f\n", media[i]);
	
		
	if (media[i] >= 7){
		printf("Aprovado.\n\n");
		
	}	else if (media[i] >=5)
		printf("Recupera��o.\n\n");
		
		else {
		printf("Reprovado.\n\n");
	}
			
  }

	
  return 0;

}

