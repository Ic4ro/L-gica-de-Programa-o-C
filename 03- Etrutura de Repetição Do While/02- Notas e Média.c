#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {	
	setlocale(LC_ALL, "");
	//Variav�is
	int i;
	float nota, soma = 0, media;
	
	for(i = 1; i <= 2; i++) {
	do {
		printf("Digite a %i� nota: ", i);
		scanf("%f", &nota);
	} while (nota <0 || nota >10 );
		
		soma += nota;
		
	}
	
	media = soma / 2;
	
	printf("===\n Exibindo Nota ===\n");
	printf("M�dia: %.1f \n", media);
	
	return 0;
}



