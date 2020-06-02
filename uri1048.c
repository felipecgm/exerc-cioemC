/*URI 1048 - Aumento de salario*/

#include <stdio.h>

int main () {
	double salario, novoSalario, reajusteGanho;
	
	scanf("%lf", &salario);
	
	if(salario <= 400) {
		reajusteGanho = 0.15 * salario;
		novoSalario = 1.15 * salario;
		printf("Novo salario: %.2f\n", novoSalario);
		printf("Reajuste ganho: %.2f\n", reajusteGanho);
		printf("Em percentual: 15 %%\n");
	}else if(salario <= 800) {
		reajusteGanho = 0.12 * salario;
		novoSalario = 1.12 * salario;
		printf("Novo salario: %.2f\n", novoSalario);
		printf("Reajuste ganho: %.2f\n", reajusteGanho);
		printf("Em percentual: 12 %%\n");
	}else if(salario <= 1200) {
		reajusteGanho = 0.10 * salario;
		novoSalario = 1.10 * salario;
		printf("Novo salario: %.2f\n", novoSalario);
		printf("Reajuste ganho: %.2f\n", reajusteGanho);
		printf("Em percentual: 10 %%\n");
	}else if(salario <= 2000) {
		reajusteGanho = 0.07 * salario;
		novoSalario = 1.07 * salario;
		printf("Novo salario: %.2f\n", novoSalario);
		printf("Reajuste ganho: %.2f\n", reajusteGanho);
		printf("Em percentual: 7 %%\n");
	}else{
		reajusteGanho = 0.04 * salario;
		novoSalario = 1.04 * salario;
		printf("Novo salario: %.2f\n", novoSalario);
		printf("Reajuste ganho: %.2f\n", reajusteGanho);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
	
}