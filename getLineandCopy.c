#include<stdio.h>
#define MAXLINE 1000

// Function prototypes
int Getline(char s[], int lim);
void copy(char to[], char from[]);

// main
int main(){
  int len; // current line length
  int max; // max line len seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; //longest line is saved in this location

  max = 0;
  // getline references a c function that is built in. 
  while ( (len = Getline(line, 1000)) > 1 ) {

      if (len > max) {
          max = len;
          copy(longest, line);
      }
  }
  if(max > 0){
    printf("%s", longest);
  }

} // END MAIN


int Getline(char s[], int lim){
  int c,i;
  // cycle through line getting characters until hitting new line char
  for (i = 0; i < (lim-1) && (c = getchar())!=EOF && c != '\n'; i++ ) {
    s[i] = c;
  }
  // add the new line char to the end of the line
  if (c = '\n') {
    s[i] = c;
    i++;
  }
  // add null to end of the character array return the length
  s[i] = '\0';
  return i;
}

// COPY FUNCTION
void copy(char to[], char from[]){
  int i = 0;
  // copying and checking is done in one expression
  while ( (to[i] = from[i]) != '\0' ) {
    i++;
  }
}
