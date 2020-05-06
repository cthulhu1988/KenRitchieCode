#include <stdio.h>

int atoi(char s[]){
	int i, n;
	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
		n = 10 * n + (s[i] - '0');
		printf("the current result: %d\n", n);
	
	}
	return n;


}


int main(){
	int a = 0;
	char b = '0'; // equals 48
	int result = (a-b);
	printf("result %d\n", result);
char myString[] = "98765432";
int r = atoi(myString);
printf("Decimal %d\n", r);
}


