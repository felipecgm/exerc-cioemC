/*URI 1013 - MAIOR*/

#include<stdio.h>

int main() {
	int a, b, c;
	int d, e, maior; /*d eh o maior valor entre a e b, e eh o maior valor entre b e c*/
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b) {
		d = (a + b + (a - b)) / 2;
	}else{
		d = (a + b +(b - a)) / 2;
	}

	if (b >= c) {
		e = (b + c +(b - c)) / 2;
	}else{	
		e = (b + c +(c - b)) / 2;
	}
	
	if (d >= e) {	
		maior = (d + e +(d - e)) / 2;
	}else{
		maior = (d + e +(e - d)) / 2;
	}
	
	printf("%d eh o maior\n", maior);
	
	return 0;
	
}
