#include <stdio.h>

int main() {
	int i, num, tri = 0;

	scanf("%d", &num);
	
	for(i = 1; tri < num; i++) {
		tri = i * (i + 1) * (i + 2);
	}
	
	if (tri == num) {
		printf("SIM (%d, %d, %d)\n", i, i + 1, i + 2);
	} else {
		printf("NAO!\n");
	}
	
	return 0;
	
}