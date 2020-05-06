#include <stdio.h>

int main(){

unsigned int a;
unsigned int b;

printf("Enter a value for a: ");
scanf("%x", &a);

printf("Enter a value for b: ");
scanf("%x", &b);

printf("Value of a: Hex: %X, Decimal: %d\n", a, a);
printf("Value of b: Hex: %X, Decimal: %d\n", b, b);


int arr[] = {0x64, 0xAB0, 0xA0A0, 0xFAFA, 0x100};
int i;
for(i=0; i < 5; i++){
	printf("Decimal: %d, Hex: %X\n", arr[i], arr[i]);

}


for(int j=0; j< 200; j++){

	printf("Decimal: %d, Hex: %X\n", j, j);

}


return 0;

}

