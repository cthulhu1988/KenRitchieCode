#include <stdio.h>
#define IN 1 // inside a word
#define OUT 0 // outside a word


int main(){
	int c, n1, nw, nc, state;

	state = OUT;

	n1 = nw = nc = 0;

	while( (c = getchar()) != (EOF)){
		if(c == '.'){break;}
		++nc;
		if(c == '\n'){
			++n1;
		}
		if(c == ' ' || c == '\n' || c == '\t' ){
			state = IN;
			++ nw;
		}
	
	}
	printf("nc: %d n1: %d nw: %d ", nc, n1, nw);
}
