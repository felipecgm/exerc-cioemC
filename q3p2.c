#include <stdio.h>
#define MAX 1500

int main () {
	char num[MAX];
	int qtdeDisp, soma = 0, i;
	
	printf("Digite o numero que sera formado com leds: ");
	scanf("%[^\n]", num);
	
	for(i = 0; num[i] != '\0'; i++) {
		switch(num[i]) {
			case '1' : soma += 2; break;
			case '2' : soma += 5; break;
			case '3' : soma += 5; break;
			case '4' : soma += 4; break;
			case '5' : soma += 5; break;
			case '6' : soma += 6; break;
			case '7' : soma += 3; break;
			case '8' : soma += 7; break;
			case '9' : soma += 6; break;
			case '0' : soma += 6; break;
		}
	}
	
	printf("Digite a quantidade disponivel de leds: ");
	scanf("%d", &qtdeDisp);
	
	printf("Sao necessarios %d leds\n", soma);
	
	if(soma <= qtdeDisp) {
		printf("A quantidade disponivel sera suficiente\n");
	}else{
		printf("A quantidade disponivel nao sera suficiente\n");
	}
	
	return 0;
	
}
