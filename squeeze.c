#include <stdio.h>

void squeeze(char s[], int c);

int main(int argc, char const *argv[])
{
    
    char line[] = "hello toe my name is robert without the eee's";

    squeeze(line, 'e');
    printf("char array: %s \n", line);    


    return 0;
}

void squeeze(char s[], int c){

    int i, j;
    for (i = j = 0; s[i] != '\0'; i++ )
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

}