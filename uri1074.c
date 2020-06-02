/*URI 1074 - Par ou impar 2*/

#include <stdio.h>

int main () {
	int n, num, i;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		scanf("%d", &num);
		if(num < 0 && num % 2 == 0) {
			printf("EVEN NEGATIVE\n");
		}else if(num < 0 && num % 2 != 0) {
			printf("ODD NEGATIVE\n");
		}else if(num > 0 && num % 2 == 0) {
			printf("EVEN POSITIVE\n");
		}else if(num > 0 && num % 2 != 0) {
			printf("ODD POSITIVE\n");	
		}else{
			printf("NULL\n");
		}
	}
	
	return 0;
	
}