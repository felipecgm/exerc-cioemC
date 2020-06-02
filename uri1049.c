/*URI 1049 - Animal*/

#include <stdio.h>

int main () {
	char filo[15], classe[15], alimentacao[15];
	
	scanf("%s %s %s", &filo, &classe, &alimentacao);
	 
	if(filo[0] == 'v') {
		if(classe[0] == 'a') {
			if(alimentacao[0] == 'c') {
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}
		}else if(classe[0] == 'm') {
			if(alimentacao[0] == 'o') {
				printf("homem\n");
			}else{
				printf("vaca\n");		
			}
		}
	}else{
		if(classe[0] == 'i') {
			if(alimentacao[2] == 'm') {
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}else if(classe[0] == 'a') {
			if(alimentacao[0] == 'h') {
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");		
			}
		}
	}
	
	
	return 0;
	
}
		