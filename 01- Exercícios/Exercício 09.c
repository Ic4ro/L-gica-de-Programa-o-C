#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Vari�veis.
	int primeiroNumero, segundoNumero, soma, produto; 
	int maiorValor, menorValor;
	float media;
	
	//Solicitando Dados Do Usu�rio.
	printf("Digite o Primeiro N�mero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o Segundo N�mero: ");
	scanf("%i",&segundoNumero);
	
	//Calculando Dados Do Usu�rio.
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = soma / (float)  2;
	
	if (primeiroNumero > segundoNumero) {
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;
	} else {
		maiorValor = segundoNumero;
		menorValor = primeiroNumero;
	} 
	
	//Exbindo Dados Para Usu�rio.
	system("cls || clear");
	printf("\n==== Exibindo Dados Para Usu�rio ====\n");
	printf("Primeiro N�mero: %.1i \n", primeiroNumero);
	printf("Segundo N�mero: %.1i \n\n", segundoNumero);
	printf("Soma: %.1i \n", soma);
	printf("Produto: %.1i \n", produto);
	printf("M�dia: %.1f \n\n", media);
	 
	
	if (primeiroNumero == segundoNumero) {
		printf("Os N�meros S�o Iguais!");
	} else {
		printf("Maior Valor: %i \n", maiorValor);
		printf("Menor Valor: %i \n", menorValor);
		
	}
	
	return 0;
}
