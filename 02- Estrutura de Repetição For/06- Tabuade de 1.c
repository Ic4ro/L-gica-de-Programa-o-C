#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	int i, numero;

//Estrutura De Repeti��o.	
	printf("Digite Um N�mero Para Tabuada: ");
	scanf("%d",&numero);

		
		for(i = 1; i <=10; i++) {
			printf("%d x %d = %d \n", numero, i, i*numero);
	
	}
	return 0;
}
