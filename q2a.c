#include <stdio.h>

int main () {
	char frase[100];
	int i, qtde = 0;
	
	printf("Informe uma frase: ");
	scanf(" %[^\n]", frase);
	
	for(i = 0; frase[i] != '\0'; i++) {
		switch(frase[i]) {
			case 'a' : qtde += 1; break;
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' : qtde += 1; break;
		}
		
	}
		
	printf("A quantidade de vogais minusculas eh %d\n", qtde);
	
	return 0;
	
}