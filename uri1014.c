/*URI 1014 - CONSUMO*/

#include<stdio.h>

int main() {
	int distancia;
	double combustivel, consumo;
	
	scanf("%d %lf", &distancia, &combustivel);
	
	consumo = distancia / combustivel;
	
	printf("%.3f km/l\n", consumo);
	
	return 0;
	
}


