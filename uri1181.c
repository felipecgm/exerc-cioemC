/*URI 1181 - Linha na Matriz*/

#include <stdio.h>
#define max 12

int main () {
	int i, j, linha;
	char t;
	double matriz[max][max], soma, media;
	
	scanf("%d %c", &linha, &t);
	
	for(i = 0; i < max; i++) {
		for(j = 0; j < max; j++) {
			scanf("%lf", &matriz[i][j]);
		}
	}

	for(j = 0, soma = 0.0; j < max; j++) {
		soma += matriz[linha][j];
	}
	
	if(t == 'S') {
		printf("%.1f\n", soma);
	}else{
		media = soma / max;
		printf("%.1f\n", media);
	}

	return 0;
	
}