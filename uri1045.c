/*URI 1045 - Tipos de triangulos*/

#include <stdio.h>

int main () {
	double a, b, c, m1, m2, m3;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a >= b && b >= c) {
		m1 = a;
		m2 = b;
		m3 = c;
	}else if(a >= c && c >= b) {
		m1 = a;
		m2 = c;
		m3 = b;
	}else if(b >= a && a >= c) {
		m1 = b;
		m2 = a;
		m3 = c;
	}else if(b >= c && c >= a) {
		m1 = b;
		m2 = c;
		m3 = a;
	}else if(c >= a && a >= b) {
		m1 = c;
		m2 = a;
		m3 = b;
	}else{
		m1 = c;
		m2 = b;
		m3 = a;
	}
	
	if(m1 >= (m2 + m3)) {
		printf("NAO FORMA TRIANGULO\n");
	}else if((m1 * m1) == (m2 * m2 + m3 * m3)) {
		printf("TRIANGULO RETANGULO\n");
	}else if((m1 * m1) > (m2 * m2 + m3 * m3)) {
		printf("TRIANGULO OBTUSANGULO\n");
	}else{
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if(a == b && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	}else if(a == b || a == c || b == c) {
		printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
	
}
		