/*URI 1168 - LED*/

#include <stdio.h>
#define MAX 100

int main () {
	int i, n, qtde = 0, soma;
	char numero[MAX];
	
	scanf("%d", &n);
	
	while(qtde < n) {
		scanf(" %[^\n]", numero);
		for(i = 0, soma = 0; numero[i] != '\0'; i++) {
			switch(numero[i]) {
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
			
			printf("%d leds\n", soma);
			qtde += 1;
		}
		
		return 0;
		
}
		
			
				
				
	
	
	