/*Calcula a média ponderada de tres valores*/

#include<stdio.h>

int main() {
	
	double A, B, C, M;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	M = 2 * A/10 + 3 * B/10 + 5 * C/10;
	
	printf("MEDIA = %.1f\n", M);
	
	return 0;
	
}