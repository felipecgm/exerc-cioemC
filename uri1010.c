/*URI 1010*/

#include<stdio.h>

int main() {
	int cod1, cod2, qtd1, qtd2;
	double vlrUni1, vlrUni2, valorPagar;
	
	scanf("%d%d%lf\n", &cod1, &qtd1, &vlrUni1);
	scanf("%d%d%lf", &cod2, &qtd2, &vlrUni2);
	
	valorPagar = qtd1 * vlrUni1 + qtd2 * vlrUni2;
	
	printf("VALOR A PAGAR: R$ %0.2f\n", valorPagar);
	
	return 0;
	
}

