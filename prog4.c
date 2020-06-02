/* Apresenta a soma de dois inteiros */

#include <stdio.h>

int main() {
	
	int n1, n2, n3;
	
	printf("\nExibe a soma de dois numeros inteiros\nInforme o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nInforme o segundo numero: ");
	scanf("%d", &n2);
	
	n3 = n1 + n2;
	
	printf("\nA soma dos dois numeros eh %d.\n", n3);
	
	return 0;
	
} 
	
	
