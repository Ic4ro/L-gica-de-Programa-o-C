#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Vari�veis.
	int qntMaca;
	float precoMaca, custoTotal, desconto;
	
	//Solicitando Dados Para Usu�rio.
	printf("Digite a Quantidade de Ma��s: ");
	scanf("%i",&qntMaca);
	
	
	
	if 	(qntMaca < 12 ) {
		precoMaca = 1.30;
	} else {
		precoMaca = 1.0;
	}
	
	custoTotal = precoMaca * qntMaca;
		//Exibindo Valores.
	
	system("cls || clear");
	printf("=== Exibindo Dados Para Usu�rio ===\n");
	printf("Quantidade Ma��s: %i \n" , qntMaca);
	printf("Preco Ma��: %.2f \n" , precoMaca);
	printf("Custo total: %.2f \n" , custoTotal);
	
	
	return 0;
}
