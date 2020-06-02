#include <stdio.h>

int main () {
	char texto[100], textoInv[100];
	int i, qtde = 0;
	
	printf("Informe uma frase: ");
	scanf(" %[^\n]", texto);
	
	for(i = 0; texto[i] != '\0'; i++) {
		qtde += 1;
	}
		
	for(i = 0; i < qtde; i++) {
		textoInv[i] = texto[qtde - i];
	}
	
	textoInv[i + 1] = '\0';

	printf("O texto invertido eh %c\n", textoInv);
	
	return 0;
	
}