#include <stdio.h>

int main(){

	int num = 100;

	
	num &= (num - 1);
	printf("num : %d\n", num);

}
