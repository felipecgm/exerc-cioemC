/*URI 1020 - Idade em dias*/

#include<stdio.h>

int main () {
	int idadeDias;
	int anos, meses, resto1, resto2;
	
	scanf("%d", &idadeDias);
	
	anos = idadeDias / 365;
	resto1 = idadeDias % 365;
	meses = resto1 / 30;
	resto2 = resto1 % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, resto2);
	
	return 0;
	
}

