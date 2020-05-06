#include <stdio.h>

main(){
	double nc;
	for(nc = 0; getchar() != (EOF & '\n'); ++nc)
		;
	printf("%.0f\n", nc);


}
