#include<stdio.h>
/*
converts a number string to an int string
*/

int lowerCase(int c);

int main(){
    // a string passed int will be conveted to ints.
    char aLetter = 'A';
    int n = lowerCase(aLetter);
    printf("%c\n",n );

  return 0;
}


int lowerCase(int c){
  if (c >= 'A' && c <= 'Z') {
    return c + ('a' -'A');
  }
}
