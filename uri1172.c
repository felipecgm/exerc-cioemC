/*URI 1172 - Substituicao em vetor I*/

#include <stdio.h>

int main () {
	int vetor[10], i;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 10; i++) {
		if(vetor[i] <= 0) {
			vetor[i] = 1;
		}
		
		printf("X[%d] = %d\n", i, vetor[i]);
		
	}
	
	return 0;
	
}
		
