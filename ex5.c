/*Exercício 5 - le um inteiro n e exibe os seus digitos invertidos*/

#include <stdio.h>

int main () {
	int quociente, resto, n, i, qtde_dig;
	
	printf("Digite um numero: ");
	scanf("%d", &n);    

	for(i = 10, qtde_dig = 0; quociente != 0; i *= 10) {
		quociente = n / i;
		qtde_dig += 1;
	}
	
	if(n < 0) {
		n *= -1;
		quociente = n / 10;
		resto = n % 10;
		printf("O inverso de %d eh -%d", n, resto);
	}else{
		quociente = n / 10;
		resto = n % 10;
		printf("O inverso de %d eh %d", n, resto);
	}

	for(i = 1; i < qtde_dig; i++) {
		resto = quociente % 10;
		printf("%d", resto);
		quociente = quociente / 10;
	}
	
	return 0;
	
}