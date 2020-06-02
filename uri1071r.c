/*URI 1071 - Soma de impares consecutivos*/

#include <stdio.h>

int main () {
	int x, y, n, soma = 0;
	
	scanf("%d\n%d", &x, &y);
	
	if(x < y) {
		if(x % 2 == 0) {
		for(n = x + 1; n < y ; n += 2) {
		 	soma += n;
		}	
		}else{
		for(n = x + 2; n < y ; n += 2) {
			soma += n;  	
	}
	}
	}else if (x > y) {
		if(y % 2 == 0) {
		for(n = y + 1; n < x ; n += 2) {
		 	soma += n;
		}	
		}else{
		for(n = y + 2; n < x ; n += 2) {
			soma += n;  	
	}
	}
	}else{
		soma;
	}
			
	printf("%d\n", soma);
			
	return 0;
	
}