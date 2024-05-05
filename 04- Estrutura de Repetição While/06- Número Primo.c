#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
    int numero, i = 2;
    int primo = 1;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � negativo ou igual a 1
    if (numero <= 1) {
        printf("Por favor, digite um n�mero inteiro positivo maior que 1.\n");
        return 1; 
    }

    // Verifica se o n�mero � primo
    while (i <= numero / 2) {
        if (numero % i == 0) {
            primo = 0; 
            break; 
        }
        i++;
    }

    // Exibe o resultado
    if (primo == 1) {
        printf("%d � um n�mero primo.\n", numero);
    } else {
        printf("%d n�o � um n�mero primo.\n", numero);
    }

    return 0;
}
