/*URI 1184 - Abaixo da diagonal principal*/

#include <stdio.h>
#define max 12

int main () {
	int i, j;
	char t;
	double matriz[max][max], soma = 0, media;
	
	scanf("%c", &t);
	
	for(i = 0; i < max; i++) {
		for(j = 0; j < max; j++) {
			scanf("%lf", &matriz[i][j]);
		}
	}

	for(i = 0; i < max; i++) {
		for(j = 0; j < max; j++) {
			if(i > j) {
			soma += matriz[i][j];
			}
		}
	}
		
	if(t == 'S') {
		printf("%.1f\n", soma);
	}else{
		media = soma / (0.5 * max * (max - 1));
		printf("%.1f\n", media);
	}

	return 0;
	
}