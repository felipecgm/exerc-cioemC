/*Exibe numero de um funcionario e seu respectivo salario*/

#include <stdio.h>

int main() {
	
	int num_func, num_hr_trab;
	double vlr_hr, salario;
	
	scanf("%d%d%lf", &num_func, &num_hr_trab, &vlr_hr);
	
	salario = num_hr_trab * vlr_hr;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_func, salario);
	
	return 0;
	
}


	