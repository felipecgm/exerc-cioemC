/*Calcula a média ponderada de dois valores*/

#include<stdio.h>

int main() {
	
	double A, B, M;
	
	scanf("%lf%lf", &A, &B);
	
	M = 3.5 * A/11 + 7.5 * B/11;
	
	printf("MEDIA = %.5f\n", M);
	
	return 0;
	
}

