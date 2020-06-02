/*URI 1018 - Cedulas*/

#include<stdio.h>

int main() {
	int dinheiro;
	int ced100, ced50, ced20, ced10, ced5, ced2, ced1;
	int rest100, rest50, rest20, rest10, rest5, rest2;
	
	scanf("%d", &dinheiro);
	
	ced100 = dinheiro /100;
	rest100 = dinheiro % 100;
	ced50 = rest100 / 50;
	rest50 = rest100 % 50;
	ced20 = rest50 / 20;
	rest20 = rest50 % 20;
	ced10 = rest20 / 10;
	rest10 = rest20 % 10;
	ced5 = rest10 / 5;
	rest5 = rest10 % 5;
	ced2 = rest5 / 2;
	rest2 = rest5 % 2;
	ced1 = rest2 / 1;
	
	printf("%d\n", dinheiro);
	printf("%d nota(s) de R$ 100,00\n", ced100);
	printf("%d nota(s) de R$ 50,00\n", ced50);
	printf("%d nota(s) de R$ 20,00\n", ced20);
	printf("%d nota(s) de R$ 10,00\n", ced10);
	printf("%d nota(s) de R$ 5,00\n", ced5);
	printf("%d nota(s) de R$ 2,00\n", ced2);
	printf("%d nota(s) de R$ 1,00\n", ced1);
	
	return 0;
	
}
	