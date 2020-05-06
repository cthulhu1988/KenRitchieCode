#include <stdio.h>

void printArr(int arr[]){
	
	for(int i = 0; i < 10; i++){
		printf("element %d is %d\n", i, arr[i]);
	}

}


int main(){

	// initialize to zero
	int zeroArray[10] = {0};

	int arr[10] = {45,6,2,78,5,6};


	// designated initializer
	int desu[10] = {[0] = 1, [5]=2, [6]=3};

	printArr(desu);


}
