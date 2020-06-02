/*URI 1047 - Tempo de jogo com minutos*/

#include <stdio.h>

int main () {
	int horIni, minIni, horFin, minFin, durHor, durMin, tempoIni, tempoFin, duracao;
	
	scanf("%d %d %d %d", &horIni, &minIni, &horFin, &minFin);
	
	tempoIni = horIni * 60 + minIni;
	tempoFin = horFin * 60 + minFin;
	
	duracao = tempoFin - tempoIni;
	
	if (duracao > 0){
		durHor = duracao / 60;
		durMin = duracao % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durHor, durMin);
	}else if (duracao < 0) {
		duracao = 1440 - tempoIni + tempoFin;
		durHor = duracao / 60;
		durMin = duracao % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durHor, durMin);
	}else{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	
	return 0;
	
}