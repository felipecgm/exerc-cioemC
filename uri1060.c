/*URI 1060 - Numeros Positivos*/

#include <stdio.h>

int main () {
	int i, qtde;
	double valor;
		
	for(i = 1, qtde = 0; i <= 6; i += 1) {
		scanf("%lf", &valor);
		if(valor > 0) {
			qtde += 1;
		}else{
			qtde = qtde;
		}
	}
	
	printf("%d valores positivos\n", qtde);
	
	return 0;
	
}
	