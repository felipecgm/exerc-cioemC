/*URI 1044 -  MULTIPLOS */

#include<stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d", &a, &b);
	
	a >= b ? (c = a % b) : (c = b % a);
	
	if (c == 0) {
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
	
}

