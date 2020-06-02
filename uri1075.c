/*URI 1075 - Resto 2*/

#include <stdio.h>

int main () {
	int n, i, num;
	
	scanf("%d", &n);
	
	if(n > 2) {
	for(i = 0; num <= 10000; i++) {
		num = n * i + 2;
		printf("%d\n", num);
	}
	
	}		
	return 0;
	
}

while(d < 0 || d > 9) {
		printf("Digito invalido! Digite novamente.\n");
		scanf("%d", &d);	
	}