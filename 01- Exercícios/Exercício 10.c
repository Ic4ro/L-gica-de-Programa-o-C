#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Vari�veis.
	int idade;
	
	//Solicitando Dados Do Usu�rio.
	printf("Digite Sua Idade: ");
	scanf("%i",&idade);
	
	//Exibindo Dados Para Usu�rio.
	
	if (idade <18 || idade >65) {
		printf("Voc� N�o � Obrigado a Votar.");
	} else {
		printf("Voc� � Obrigado a Votar.");
	}
	
	return 0;
}
