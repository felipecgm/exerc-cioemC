#include<stdio.h>

int main(){
	int *p1, *p2;
	int a = 5, b = 5;
	
	p1 = &a;
	p2 = &b;
	
	printf("%c\n", *p1 == *p2 ? 'S' : 'N');
	
	return 0;
}