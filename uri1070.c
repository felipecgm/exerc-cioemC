/*URI 1070 - Seis numeros impares*/

#include <stdio.h>

int main () {
	int valor, i, n;
	
	scanf("%d", &valor);
	
	if(valor % 2 == 0) {
		n = valor + 1;
	}else{
		n = valor;
	}
	
	printf("%d\n", n);
	
	for(i = 1; i <= 5; i += 1) {
		
			n += 2;
			printf("%d\n", n);
	}
		
	return 0;
	
}