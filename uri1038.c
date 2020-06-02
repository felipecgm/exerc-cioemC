/*URI 1038 - Lanche*/

#include<stdio.h>

int main() {
	int cod, qtde;
	
	scanf("%d %d", &cod, &qtde);
	
		
	switch (cod) {
		case 1 : printf("Total: R$ %.2f\n", 4.00 * qtde); break;
		case 2 : printf("Total: R$ %.2f\n", 4.50 * qtde); break;
		case 3 : printf("Total: R$ %.2f\n", 5.00 * qtde); break;
		case 4 : printf("Total: R$ %.2f\n", 2.00 * qtde); break;
		case 5 : printf("Total: R$ %.2f\n", 1.50 * qtde); break;
		default: printf("Total: R$ %.2f\n", 0.00 * qtde); break;
	}
	
	return 0;
	
}

