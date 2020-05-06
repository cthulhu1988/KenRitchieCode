#include <stdio.h>

int main(){
	int a, b;
	int a = 987; 
	int b = 6;

	int *pa = &b; 
	int *pb = &a;

	*pb = *pa;
	



return 0;
}
