#include <stdio.h>

int main () {
	unsigned int i, n, aux;
	int const MUL = 3;
	
	printf("Digite o n: ");
	scanf("%u", &n);
	
	for(i = 1; i <= n; i += 1) {
		aux = i % MUL;
		printf("%d\n", aux);
		switch(aux) {
			case 0: printf("Pimba!\n"); break;
			default: printf("%d\n", i);
		}
	}
	
	return 0;
	
}