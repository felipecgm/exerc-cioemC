/*URI 1012 - AREA */

#include<stdio.h>

int main() {
	const double PI = 3.14159;
	double a, b, c;
	double area_triang, area_circ, area_trap, area_quad, area_retang;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	area_triang = a * c / 2;
	area_circ = PI * c * c;
	area_trap = (a + b) * c / 2;
	area_quad = b * b;
 	area_retang = a * b;
	
	
	printf("TRIANGULO: %.3f\n", area_triang);
	printf("CIRCULO: %.3f\n", area_circ);
	printf("TRAPEZIO: %.3f\n", area_trap);
	printf("QUADRADO: %.3f\n", area_quad);
	printf("RETANGULO: %.3f\n", area_retang);
	
	return 0;
	
}