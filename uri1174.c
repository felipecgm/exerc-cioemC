/*URI 1174 - Selecao em vetor I*/

#include <stdio.h>

int main () {
	double vetor[100];
	int i;
	
	for(i = 0; i < 100; i++) {
		scanf("%lf", &vetor[i]);
	}
	
	for(i = 0; i < 100; i++) {
		if(vetor[i] <= 10) {
			printf("A[%d] = %.1f\n", i, vetor[i]);
		}
	}
	
	return 0;
	
}