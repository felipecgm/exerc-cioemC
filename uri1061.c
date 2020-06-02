/*URI 1061 - Tempo de um evento*/

#include <stdio.h>

int main () {
	int diaIni, horIni, minIni, segIni;
	int diaFin, horFin, minFin, segFin;
	int durDia, durHor, durMin, durSeg, tempoIni, tempoFin, duracao;
	int restoDia, restoHor, restoMin;
	
	scanf("Dia %d\n%d:%d:%d\n", &diaIni, &horIni, &minIni, &segIni);
	scanf("Dia %d\n%d:%d:%d\n", &diaFin, &horFin, &minFin, &segFin);
	
	tempoIni = diaIni * 86400 + horIni * 3600 + minIni * 60 + segIni;
	tempoFin = diaFin * 86400 + horFin * 3600 + minFin * 60 + segFin;
	
	duracao = tempoFin - tempoIni;
	
	if (duracao > 0){
		
		durDia = duracao / 86400;
		restoDia = duracao % 86400;
		durHor = restoDia / 3600;
		restoHor = restoDia % 3600;
		durMin = restoHor / 60;
		restoMin = restoHor % 60;
		durSeg = restoMin;
		
		printf("%d dia(s)\n", durDia);
		printf("%d hora(s)\n", durHor);
		printf("%d minuto(s)\n", durMin);
		printf("%d segundo(s)\n", durSeg);
		
	}else{
		
		duracao = 86400 - tempoIni + tempoFin;
		durDia = duracao / 86400;
		restoDia = duracao % 86400;
		durHor = restoDia / 3600;
		restoHor = restoDia % 3600;
		durMin = restoHor / 60;
		restoMin = restoHor % 60;
		durSeg = restoMin;
		
		printf("%d dia(s)\n", durDia);
		printf("%d hora(s)\n", durHor);
		printf("%d minuto(s)\n", durMin);
		printf("%d segundo(s)\n", durSeg);
	
	}
	
	return 0;
	
}