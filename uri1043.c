/*URI 1043 - Triangulo*/

#include <stdio.h>

int main () {
	double a, b, c, perimetro, area;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a < (b + c) && b < (a + c) && c < (a + b)) {
		perimetro = a + b + c;
		printf("Perimetro = %.1f\n", perimetro);
	}else{
		area = (a + b) * 0.5 * c;
		printf("Area = %.1f\n", area);
	}
	
	return 0;
	
}