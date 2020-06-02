/*URI 1113 - Crescente e Decrescente*/

#include <stdio.h>
#define TRUE 1

int main () {
	int x, y;
	
	while (TRUE) { 
		scanf("%d %d", &x, &y);
		if(x < y) {
			printf("Crescente\n");
		}else if(x > y) { 
			printf("Decrescente\n");
		}else{
			break;
		}
	}
	
	return 0;
	
}