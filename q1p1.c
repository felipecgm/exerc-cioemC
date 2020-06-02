#include <stdio.h>

int main () {
	int numIn, aux, numOut = 0;
	
	scanf("%d", &numIn);
	
	aux = numIn;
	while(aux != 0) {
		numOut = numOut * 10 + aux % 10;
		aux = aux / 10;
	}
	
	if(numIn == numOut) {
		printf("Sim\n");
	}else{
		printf("Nao\n");
	}
	
	return 0;
	
}

