#include <stdio.h>

int power(int base, int exponent);

int main(){
	int i;

	for (i = 0; i < 10; ++i){
		printf("num: %d base is 2: %d base is 3: %d \n ", i, power(2, i), power(-3, i));
	}

}	

int power(int base, int exponent){

	int sum = 1;
	
	int i = 0;
	for(i; i < exponent; ++i){
		sum *= base;
	}

	return sum;


}
