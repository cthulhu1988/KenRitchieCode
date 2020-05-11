#include <ctype.h>
#include <stdio.h>
double atofloat(char s[]);

int main(){
	
	char n[]= "98543.566";
	double val = atofloat(n);
	
	printf("%f\n", val);
}

double atofloat(char s[]){
	double val, power;
	int i, sign;
	// skip whitespace
	for(i =0; isspace(s[i]); i++ )
		;
	// determine sign
	sign = (s[i] == '-') ? -1 : 1;
	// increment
	if(s[i] == '-' || s[i] == '+'){
		i++;
	}


	for(val = 0.0; isdigit(s[i]); i++){
		printf("value before %f\n", val);
		val = 10.0 * val + ( s[i] - '0' );
		printf("value after %f\n", val);
	}

	if(s[i] == '.'){i++;}

	for(power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] -'0');
		power *= 10.0;
		printf("val %f and power %f\n", val, power);
	}

	return sign * val/power;



}
