/*URI 1072 - Intervalo 2*/

#include <stdio.h>

int main () {
	int n, num, i, qtdein, qtdeout;
	
	scanf("%d", &n);
	
	for(i = 1, qtdein = 0, qtdeout = 0; i <= n; i++) {
		scanf("%d", &num);
		if(num >= 10 && num <= 20) {
			qtdein += 1;
		}else{
			qtdeout += 1;
		}
	}
	
	printf("%d in\n", qtdein);
	printf("%d out\n", qtdeout);
	
	return 0;
	
}