#include <stdio.h>

int main(int argc, char **argv){


    // set undeclared variable
int age;
// print prompt and use scanf to take input. 
// %d is the format specifier, &age is address of age. 
printf("how old are you? \n");
scanf("%d", &age);
// This must be C's interpolation. 
printf("you are: %d years old \n", age);

char name[25];

printf("What is your name? \n");
scanf("%s", &name);

printf("Your name is %s \n", name);



return 0;
}
