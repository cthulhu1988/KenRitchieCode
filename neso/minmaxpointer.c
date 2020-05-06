#include <stdio.h>
// pointers are used in the function itself
void minMax(int arr[], int len, int *min, int *max){
	*min = *max = arr[0];
		for(int i = 1; i < len; i++){
			if(arr[i] < *min){
				*min = arr[i];
			}
			if(arr[i] > *max ){
				*max = arr[i];
			}
		}
}



int main(){
	int a[] = {23, 4, 21, 98, 897, 45, 32, 10, 123, 986, 50, 3, 4, 5};
	int min, max;
	int sizeArr = sizeof(a)/sizeof(a[0]);
	
	// addresses are passed in	
	minMax(a, sizeArr, &min, &max);
	printf("min %d and max %d\n", min, max);
}




