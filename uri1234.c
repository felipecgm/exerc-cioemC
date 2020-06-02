/*URI 1234 - Sentenca Dancante*/

#include <stdio.h>
#define MAX 52

int main () {
	int i;
	char texto[MAX], danc[MAX];
	
	while(fgets(texto, MAX, stdin) != NULL) {
		for(i = 0; texto[i] != '\0'; i++) {
			if(texto[i] >= 'a' && texto[i] <= 'z') {
				texto[i] -= 32;
			}
		}
			
		for(i = 0; texto[i] != '\0'; i++) {
			if((i % 2) != 0 && texto[i] >= 'A' && texto[i] <= 'Z') {
				danc[i] = texto[i] + 32;
			}else{
				danc[i] = texto[i];
			}
		}
		
		danc[i] = '\0';
			
		printf("%s", danc);
			
		}
	
	return 0;
	
}