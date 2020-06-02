/*URI 1067 - Quadrado de pares*/

#include <stdio.h>

int main () {
	int num, i, quad;
	
	scanf("%d", &num);
	
	for(i = 2; i <= num; i++) {
		
		if(i % 2 == 0) {
		quad = i * i;	
		printf("%d^2 = %d\n", i, quad);
	}
	}
	
	return 0;
	
}