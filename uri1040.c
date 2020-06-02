/*URI 1040 - Media 3*/

#include <stdio.h>

int main () {
	double a, b, c, d, e, media, mediaexame;
	
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
	media = 0.2 * a + 0.3 * b + 0.4 * c + 0.1 * d;
	
	printf("Media: %.1f\n", media);
	
	if(media < 5) {
		printf("Aluno reprovado.\n");
	}else if(media <= 6.9) {
		printf("Aluno em exame.\n");
		scanf("%lf", &e);
		printf("Nota do exame: %.1f\n", e);
		mediaexame = (media + e) / 2;
		if(mediaexame >= 5) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", mediaexame);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", mediaexame);
		}
	}else{
		printf("Aluno aprovado.\n");
	}
	
	return 0;

}	
		
		
		