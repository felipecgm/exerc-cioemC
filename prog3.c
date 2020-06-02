/*Imprime o cubo de um numero inteiro*/

#include <stdio.h>

int main() {
	
	int numero, cubo;
	
	printf("\nImprime o cubo de um numero inteiro.\nDigite o numero: ");
	scanf("%d", &numero);
	
	cubo = numero*numero*numero;
	
	printf("\n O cubo do numero eh %d\n", cubo);
	
	return 0;
	
}