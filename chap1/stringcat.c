#include <stdio.h>

void strCat(char s[], char t[]){
  int i, j; i = j = 0;
  while (s[i] != '\0') {
    i++;
  }
  while ( (s[i++] = t[j++]) != '\0')
  ;
}


int main(int argc, char const *argv[]) {

  char firstname[30] = "Isaac";
  char lastname[30] =  "Callison";

  strCat(firstname, lastname);
  printf("%s\n",firstname );
  return 0;
}
