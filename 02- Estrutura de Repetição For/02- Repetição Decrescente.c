#include <stdio.h>
#include <locale.h>


//For
//Estrutura de Repeti��o Decrescente C.
int main() {
	setlocale(LC_ALL, "");
	int j;
	
	printf("N�meros Decrescente. \n");
	for(j = 10; j >= 1 ; j--){
		printf("%d \n",j);
	}
	return 0;
}
	
