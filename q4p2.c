#include <stdio.h>
#define MAX 3

int main () {
	double elemento[MAX][MAX], soma = 0;
	int i, j, num;
	char opcao;
	
	printf("Informe a matriz: ");
	for(i = 0; i < MAX; i++) {
		for(j = 0; j < MAX; j++) {
			scanf("%lf", &elemento[i][j]);
		}
	}
	
	printf("Informe um numero de 1 a 20: ");
	scanf("%d", &num);
	
	printf("Infome a opcao L ou C: ");
	scanf(" %c", &opcao);
	
	if(opcao == 'L') {
		for(j = 0; j < MAX; j++) {
			soma += elemento[num - 1][j];
		}
	}else if(opcao == 'C') {
		for(i = 0; i < MAX; i++) {
			soma += elemento[i][num - 1];
		}
	}else{
		return 0;
	}
	
	printf("A soma eh %.2f\n", soma);
	
	return 0;
	
}
			
