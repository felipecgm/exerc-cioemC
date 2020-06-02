/*URI 1179 - Preenchimento de vetor IV*/

#include <stdio.h>

int main () {
	int vetor[15], i, j, k, par[5], impar[5];
	
	for(i = 0; i < 15; i++) {
		scanf("%d", &vetor[i]);
	}
		
	for(i = 0, j = 0, k = 0; i < 15; i++, j++, k++) {
		if((vetor[i] % 2) == 0) {
			par[j] = vetor[i];
		}else{
			impar[k] = vetor[i];
		}
	}
	
	for(j = 0; j < 5; j++) {
		printf("par[%d] = %d\n", j, par[j]);
	}
	
	for(k = 0; k < 5; k++) {
		printf("impar[%d] = %d\n", k, impar[k]);
	}
	
	return 0;
	
}