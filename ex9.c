#include <stdio.h>

int main () {
	char texto[200];
	int i, qtde, qtdeIgual;
		
	printf("Qual o texto? ");
	scanf("%[^\n]", texto);
	
	for(i = 0, qtde = 0; texto[i] != '\0'; i++) {
		qtde += 1;
	}
	
	for(i = 0, qtdeIgual = 0; texto[i] != '\0'; i++) {
		if(texto[i] == texto[qtde - 1 - i]) {
			qtdeIgual += 1;
		}
	}
	
	if(qtde == qtdeIgual) {
		printf("%c pal%cndromo\n", 144, 161);
	}else{
		printf("Nao %c pal%cndromo\n", 130, 161);
	}
	
	return 0;
	
}
		