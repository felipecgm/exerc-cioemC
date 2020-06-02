/*URI 1142 - PUM*/

#include <stdio.h>

int main () {
	int i, n, a, b, c;
	
	scanf("%d", &n);
	
	for(i = 1, a = -3, b = -2, c = -1; i <= n; i ++) {
		a += 4;
		b += 4;
		c += 4;
		printf("%d %d %d PUM\n", a, b, c);
	}
	
	return 0;
	
}