#include <stdio.h>
/*
 * & is biwise AND
 * | is bitwise OR
 * ^ is exclusive OR
 * << is left shift
 * >> is right shift
 * ~ is one's compliment (unary)
 * */

#define MAX 2

int numShifted(int num){
	int count = 0;
	
	while(num){
		count++;
		printf("%d\n", num);
		num >>=1;
	
	}
	return count;

}


int andop(int i, int j){
	return (i&j);
}


int main(){

	int num_to_shift =435;
	int cnt = numShifted(num_to_shift);
	
	printf("%d\n",cnt);

	int num = 3;
	printf("size == %ld\n", sizeof(num));
	printf("num is %d, left shift %d", num, num<<1);
	printf(" left shift %d", num<<2);
	printf(" left shift %d", num<<3);
	printf(" left shift %d", num<<4);
	printf(" left shift %d", num<<5);
	printf(" left shift %d", num<<6);
	printf(" left shift %d", num<<7);
	printf(" right shift %d", num>>1);
	printf(" right shift %d", num>>2);
	printf("\n\n");
	int rr = (num << 13);
	printf("%d -- new size %ld\n", rr,sizeof(rr) );
	printf("\n\n");


	int i, j;
	for(i=0; i < MAX; i++){
		for(j=0; j < MAX; j++){
			int bit = andop(i,j);
			printf("i is %d", i);
			printf(" j is %d ", j);
			printf("The result is: %d\n", bit);
			
		}
	}	


}
