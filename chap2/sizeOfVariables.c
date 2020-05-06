#include <stdio.h>

/* This program outputs the size of variable types and is machine dependant.*/

int main(){
	printf("This is the size of a char: %8ld\n", sizeof(char));
	printf("This is the size of a short int: %3ld\n", sizeof(short int));
	printf("This is the size of a int: %9ld\n", sizeof(int));
	printf("This is the size of a float: %7ld\n", sizeof(float));
	printf("This is the size of a long int: %4ld\n", sizeof(long int));
	printf("This is the size of a long: %8ld\n", sizeof(long));
	printf("This is the size of a long long: %3ld\n", sizeof(long long));
	printf("This is the size of a double: %6ld\n", sizeof(double));
	printf("This is the size of a long double: %ld\n", sizeof(long double));


}
