/*URI 1064 - Positivos e media*/

#include <stdio.h>

int main () {
	int i, qtde;
	double valor, media, total;
		
	for(i = 1, qtde = 0, total = 0; i <= 6; i += 1) {
		scanf("%lf", &valor);
		if(valor > 0) {
			qtde += 1;
			total += valor;
		}else{
			qtde = qtde;
		}
	}
	
	printf("%d valores positivos\n", qtde);
	media = total / qtde;
	printf("%.1f\n", media);
	
	return 0;
	
}