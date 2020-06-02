#include <stdio.h>

int main () {
	int num, n, i, x, qtde = 0;
	
	printf("Digite um numero para verificar seus multiplos: ");
	scanf("%d", &num);
	
	printf("\nQuantos numeros quer testar? ");
	scanf("%d", &n);
	
	printf("\nDigite os numeros: ");
	
	for(i = 1; i <= n; i++) {
		scanf("%d", &x); 
		
		if((x % num) == 0) {
			qtde += 1;
		}
	}
	
	printf("Foram encontrados %d multiplo(s) de %d\n", qtde, num);
	
	return 0;

}
	


	