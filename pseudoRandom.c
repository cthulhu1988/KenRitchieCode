#include <stdio.h>

unsigned long int next = 1;
void srand(unsigned int seed);
int rand(void);


int main(int argc, char const *argv[])
{
    srand(rand());

    rand();
    printf("next random : %ld\n", next);



    return 0;
}

void srand(unsigned int seed){
    next = seed;
    printf("seed is %ld\n", next);

}
int rand(void){
    next = next * 1103515245 + 12345;
    return(unsigned int) (next / 65536) % 32788;        
    }