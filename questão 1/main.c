#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Definição das variaveis
    int i, j=0, n;

    //leitura do tamanho do triangulo
	printf("\nAltura do triangulo retangulo: ");
	scanf("%d", &n);
	fflush(stdin);

	// Teste de validação
	while (n < 1 || n > 50 ) {
		printf("\nAltura invalida, digite um numero inteiro entre 1 e 50: ");
		scanf("%d", &n);
		fflush(stdin);
	}
	printf ("\n\n");

	// Formação do triangulo retangulo
    for (i=0;i<n;i++) {
    	printf("           ");
    	while(j<n-i) {
    		printf(" ");
    		j++;
    	}
    	while (j<=n) {
    		printf ("*");
    		j++;
    	}
    	printf("\n");
    	j=0;
    }

    // fim
    printf ("\n\n");
    system("pause");
    return 0;
}
