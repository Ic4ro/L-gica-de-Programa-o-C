#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Vari�veis.
	char loginSalvo[200] = "Marta";
	char senhaSalva[200] = "123";
	char login[200];
	char senha[200];
	
	//Solicitando Login e Senha do Usu�rio.
	printf("Digite Seu Login: ");
	scanf("%s",&login);
	
	printf("Digite Sua Senha:  ");
	scanf("%s",&senha);
	
	//Verificando Dados Do Usu�rio.
	if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
		printf("Bem Vindo!");
	} else {
		printf("Acesso Negado!");
	}
	
	return 0;	
}

