/*URI 1042 - Sort Simples*/

#include <stdio.h>

int main() {
	int a, b, c, menor1, menor2, menor3;
	
	scanf("%d %d %d", &a, &b, &c);

	if(a <= b && b <= c) {
		menor1 = a;
		menor2 = b;
		menor3 = c;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);
	}else if (a <= c && c <= b) {	
		menor1 = a;
		menor2 = c;
		menor3 = b;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);
	}else if (b <= a && a <= c) {	
		menor1 = b;
		menor2 = a;
		menor3 = c;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);		
	}else if (b <= c && c <= a) {	
		menor1 = b;
		menor2 = c;
		menor3 = a;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);
	}else if (c <= a && a <= b) {	
		menor1 = c;
		menor2 = a;
		menor3 = b;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);
	}else{	
		menor1 = c;
		menor2 = b;
		menor3 = a;
		printf("%d\n%d\n%d\n", menor1, menor2, menor3);
	}
	
	printf("\n%d\n%d\n%d\n", a, b, c);
	
	return 0;
	
}