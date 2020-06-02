/*URI 1078 - Tabuada*/

#include <stdio.h>

int main () {
	int n, prod, i;
	
	scanf("%d", &n);
	
	for(i = 1; i <= 10; i++) {
		prod = i * n;
		printf("%d x %d = %d\n", i, n, prod);
	}
	
	return 0;
	
}