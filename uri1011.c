/*URI 1011 - Volume de uma esfera*/

#include<stdio.h>

int main() {
	const double PI = 3.14159;
	double raio, volume;
	
	scanf("%lf", &raio);
	
	volume = 4.0/3 * PI * raio * raio * raio;
	
	printf("VOLUME = %0.3f\n", volume);
	
	return 0;
	
}

