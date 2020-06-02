/*URI 1009 - SALARIO COM BONUS*/

#include<stdio.h>

int main() {
	char nome_vend;
	double salario_fixo, total_vendas, salario_total;
	
	scanf("%s %lf %lf", &nome_vend, &salario_fixo, &total_vendas);
	
	salario_total = salario_fixo + 0.15 * total_vendas;
	
	printf("TOTAL = R$ %.2f\n", salario_total);
	
	return 0;
	
}
	