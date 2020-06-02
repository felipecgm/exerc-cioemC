/*URI 1094 - Experiencias*/

#include <stdio.h>

int main () {
	char tipoCobaia;
	int n, i, totalCobaia, totalCoelho = 0, totalRato = 0, totalSapo = 0, qtdeCobaia;
	double percCoelho, percRato, percSapo;
	
	scanf("%d", &n);
	
	for(i = 0, totalCobaia = 0; i < n; i++) {
		scanf("%d  %c", &qtdeCobaia, &tipoCobaia);
		totalCobaia += qtdeCobaia;
		
		if(tipoCobaia == 'C') {
			totalCoelho += qtdeCobaia;
		}else if(tipoCobaia == 'R') {
			totalRato += qtdeCobaia;
		}else{
			totalSapo += qtdeCobaia;
		}
	}
	
	percCoelho = ((double)totalCoelho / totalCobaia) * 100;
	percRato = ((double)totalRato / totalCobaia) * 100;
	percSapo = ((double)totalSapo / totalCobaia) * 100;
	
	printf("Total: %d cobaias\n", totalCobaia);
	printf("Total de coelhos: %d\n", totalCoelho);
	printf("Total de ratos: %d\n", totalRato);
	printf("Total de sapos: %d\n", totalSapo);
	printf("Percentual de coelhos: %.2f %%\n", percCoelho);
	printf("Percentual de ratos: %.2f %%\n", percRato);
	printf("Percentual de sapos: %.2f %%\n", percSapo);
	
	return 0;
	
}