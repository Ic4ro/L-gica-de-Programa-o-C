#include <stdio.h>
#include <locale.h>


//For
//Estrutura de Repeti��o Crescente C.
int main() {
	setlocale(LC_ALL, "");
	int i;
	
	printf("N�meros Crescente. \n");
	for(i = 1; i <=10; i++){
		printf("%d \n",i);
	}
	return 0;
}
	
