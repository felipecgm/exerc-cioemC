/*URI 1140 - Flores Florescem na Franca*/

#include <stdio.h>
#define MAX 1050
#define TRUE 1

int main () {
	char texto[MAX], opcao;
	int pos[MAX], qtde, i, j;
	
	while(TRUE) {
		scanf(" %[^\n]", texto);
		if(texto[0] == '*') {
			break;
		}else{
			for(i = 0, qtde = 0, j = 0; texto[i] != '\0'; i++) {
				if(texto[i] == ' ') {
					qtde += 1;
					pos[j] = i;
					j++;
				}
			}

			for(j = 0; j < qtde; j++) {
				if((texto[0] == texto[pos[j] + 1]) || (texto[0] == texto[pos[j] + 1] - 32) || (texto[0] == texto[pos[j] + 1] + 32)) {
					opcao = 'T';
				}else{
					opcao = 'F';
					break;
				}
			}
			
			if(opcao == 'T') {
				printf("Y\n");
			}else{
				printf("N\n");
			}
		}
	}
	
	return 0;
	
}
