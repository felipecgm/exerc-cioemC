/*URI 1017 - Gasto de combustivel*/

#include<stdio.h>

int main() {
	int tempo, velocidade;
	const int KML = 12;
	double consumo;
	
	scanf("%d %d", &tempo, &velocidade);
	
	consumo = (double) (tempo * velocidade) / KML;
	
	printf("%.3f\n", consumo);
	
	return 0;
	
}
	