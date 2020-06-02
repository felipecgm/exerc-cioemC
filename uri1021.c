/*URI 1021 - Notas e Moedas*/

#include<stdio.h>

int main() {
	double dinheiro, centavos;
	int dinheiroint, ced100, ced50, ced20, ced10, ced5, ced2, moed100;
	int rest100, rest50, rest20, rest10, rest5, rest2;
	int centavosint, moed50, moed25, moed10, moed5, moed1;
	int restm50, restm25, restm10, restm5;
	
	scanf("%lf", &dinheiro);
	
	dinheiroint = (int) dinheiro;
	
	ced100 = dinheiroint /100;
	rest100 = dinheiroint % 100;
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
	moed100 = rest2 / 1;

	centavos = (dinheiro - dinheiroint) * 100;
	centavosint = (int) centavos;
	
	moed50 = centavosint / 50;
	restm50 = centavosint % 50;
	moed25 =  restm50 / 25;
	restm25 = restm50 % 25;
	moed10 = restm25 / 10;
	restm10 = restm25 % 10;
	moed5 =  restm10/ 5;
	restm5 = restm10% 5;
	moed1 =  restm5 / 1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", ced100);
	printf("%d nota(s) de R$ 50.00\n", ced50);
	printf("%d nota(s) de R$ 20.00\n", ced20);
	printf("%d nota(s) de R$ 10.00\n", ced10);
	printf("%d nota(s) de R$ 5.00\n", ced5);
	printf("%d nota(s) de R$ 2.00\n", ced2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moed100);
	printf("%d moeda(s) de R$ 0.50\n", moed50);
	printf("%d moeda(s) de R$ 0.25\n", moed25);
	printf("%d moeda(s) de R$ 0.10\n", moed10);
	printf("%d moeda(s) de R$ 0.05\n", moed5);
	printf("%d moeda(s) de R$ 0.01\n", moed1);
	
	return 0;

}
	