/*URI 1066 - Pares, Impares, Positivos e Negativos*/

#include <stdio.h>

int main () {
	int i, qtde_par, qtde_impar, qtde_positivo, qtde_negativo, valor;
		
	for(i = 1, qtde_par = 0, qtde_impar = 0, qtde_positivo = 0, qtde_negativo = 0; i <= 5; i += 1) {
		scanf("%d", &valor);
		if(valor > 0) {
			qtde_positivo += 1;
		}else if(valor < 0) {
			qtde_negativo += 1;
		}
			
		if(valor % 2 == 0) {
			qtde_par += 1;
		}else{
			qtde_impar +=1;
		}
	}

	printf("%d valor(es) par(es)\n", qtde_par);
	printf("%d valor(es) impar(es)\n", qtde_impar);
	printf("%d valor(es) positivo(s)\n", qtde_positivo);
	printf("%d valor(es) negativo(s)\n", qtde_negativo);
	
	return 0;
	
}