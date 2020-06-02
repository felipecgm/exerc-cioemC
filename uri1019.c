/*URI 1019 - Conversão de Tempo: Segundo no formato horas:minutos:segundos*/

#include<stdio.h>

int main() {
	int segundos;
	int horas, resto1, minutos, resto2;
	
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	resto1 = segundos % 3600;
	minutos = resto1 / 60;
	resto2 = segundos % 60;
	
	printf("%d:%d:%d\n", horas, minutos, resto2);

	return 0;
	
}


	