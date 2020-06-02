/*Exercício 4 - numero de vezes que um digito d aparece em um inteiro n*/

#include <stdio.h>

int main () {
	int n, n_copia, d, i, div, qtde_dig, pot, qtde_d = 0, rest;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	n_copia = n;
	
	printf("Digite um digito[0..9]: ");
	scanf("%d", &d);
	
	while(d < 0 || d > 9) {
		printf("Digito invalido! Digite novamente.\n");
		scanf("%d", &d);	
	}
	
	if(n < 0) {
		n *= -1;
	}
	
	for(i = 10, qtde_dig = 0; div != 0; i *= 10) {
		div = n / i;
		qtde_dig += 1;
	}
	
	for(i = 1, pot = 1; i <= qtde_dig; i++) {
		pot *= 10;
	}
	
	if(qtde_dig == 1) {
		if(n == d) {
		qtde_d += 1;
		}
		
	}else{
		div = n / pot;
		if(div == d) {
			qtde_d += 1;
		}
		
		rest = (n % pot) * 10;
		div = rest / pot;
		if(div == d) {
			qtde_d += 1;
		}
		
		for(i = 1; i < qtde_dig; i++) {
			rest = (rest % pot) * 10;
			div = rest / pot;
			if(div == d) {
				qtde_d += 1;
			}
		} 
	}
	
	if(qtde_d == 0) {
		printf("O digito %d nao aparece no numero %d\n", d, n_copia);
	}else if(qtde_d == 1) {
		printf("O digito %d aparece 1 vez no numero %d\n", d, n_copia);
	}else{
		printf("O digito %d aparece %d vezes no numero %d\n", d, qtde_d, n_copia);
	}
		
	return 0;
	
}
	
	
		
	