#include<stdio.h>
/*
converts a number string to an int string
*/

int atoifunc(char s[]);

int main(){
    // a string passed int will be conveted to ints.
    char s[] = "1234";
    int n = atoifunc(s);
    printf("%d\n",n );



}

int atoifunc(char s[]){
  int i, n;
  n = 0;
  // check to make sure in bounds
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    // adds each new number and increases by magnitude of 10
    n = 10 * n + (s[i] - '0');

  }
  return n;
}
