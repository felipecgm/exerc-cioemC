/*URI 1071 - Soma de impares consecutivos*/

#include <stdio.h>

int main () {
	int x, y, n, menor, maior, soma, zero = 0;
	
	scanf("%d\n%d", &x, &y);
	
	if(x < y) {
		menor = x;
		maior = y;
	}else if (x > y) {
		menor = y;
		maior = x;
	}else{
		printf("%d\n", zero);
		return 0; 
	}

	if(menor % 2 == 0) {
		for(n = menor + 1; n < maior ; n += 2) {
		 	soma = n + 0;
	}	
	}else{
		for(n = menor + 2; n < maior ; n += 2) {
			soma = n + 0;  	
	}
	}
	
	printf("%d\n", soma);
			
	return 0;
	
}