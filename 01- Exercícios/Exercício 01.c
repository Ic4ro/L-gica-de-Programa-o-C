#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	
	// Declarando Vari�veis.
	float primeiroNumero, segundoNumero;
	float soma, subtracao, multiplicacao, divisao;
	
	// Solicitando Dados Do Usu�rio.
	printf("Digite o Primeiro N�mero: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o Segundo Numero: ");
	scanf("%f",&segundoNumero);
	
	//Calculando Dados Do Usu�rio.
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	//Exibindo Dados Para Usu�rio.
	system("cls || clear");
	printf("=== Exibindo Dados Para Usu�rio ===\n");
	printf("Primeiro N�mero: %.1f \n", primeiroNumero);
	printf("Segundo N�mero: %.1f \n", segundoNumero);
	printf("Soma = %.1f \n", soma);
	printf("Subutra��o = %.1f \n", subtracao);
	printf("Multiplica��o = %.1f \n", multiplicacao);
	printf("Divis�o = %.1f \n", divisao);
	
	return 0;
	 
	
	
	
	
	
}
