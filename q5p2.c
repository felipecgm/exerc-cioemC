#include <stdio.h>
#define MAX 30

int main () {
	int qtdeEst, estFin, estIni, i, a, b;
	double tempoEst[MAX], tempoTotal = 0;
	
	printf("Qual a quantidade de estacoes? ");
	scanf("%d", &qtdeEst);
	
	for(i = 0; i < (qtdeEst - 1); i++) {
		printf("Qual o tempo para ir da estacao %d para %d? ", i + 1, i + 2);
		scanf("%lf", &tempoEst[i]);
		
	}
	
	printf("Informe a estacao inicial: ");
	scanf("%d", &estIni);
	
	printf("Informe a estacao final: ");
	scanf("%d", &estFin);
	
	if(estIni > estFin) {
		a = estFin - 1;
		b = estIni - 2;
	}else {
		a = estIni - 1;
		b = estFin - 2;
	}
	
	for(i = a; i <= b; i++) {
		tempoTotal += tempoEst[i];
	}
	
	printf("O tempo necessario sera: %.2f minutos\n", tempoTotal);
	
	return 0;
	
}
		
	
