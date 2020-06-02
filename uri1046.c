/*URI 1046 - TEMPO DE JOGO*/

#include<stdio.h>

int main() {
	int inicio, fim, duracao;
	
	scanf("%d %d", &inicio, &fim);
	
	duracao = fim - inicio;
	
	if (duracao > 0){
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}else if (duracao < 0) {
		printf("O JOGO DUROU %d HORA(S)\n", 24 - inicio + fim);
	}else{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
	
}
		
		