/*URI 1065 - Pares entre cinco numeros*/

#include <stdio.h>

int main () {
	int num, n, i;
		
	for(i = 1, n = 0; i <= 5; i++) {
		scanf("%d", &num);
		if(num % 2 == 0) {
			n++;
		}
	}
	
	printf("%d valores pares\n", n);
	
	return 0;
	
}