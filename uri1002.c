/*Calcula a area de um circulo*/

#include<stdio.h>

int main() {
	
	double raio, A;
	
	scanf("%lf", &raio);
	
	A = 3.14159 * raio * raio;
	
	printf("A=%.4f\n", A);
	
	return 0;
	
}

