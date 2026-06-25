#include <stdio.h>
#include <dirent.h>

int main(int argc, char*argv[]){
// set path to be . if no argument passed
const char * path = (argc > 1) ? argv[1] : ".";

DIR * dir = opendir(path);
if (!dir){
    perror("opendir");
    return 1;
}

struct dirent *entry;
while((entry = readdir(dir)) != NULL){
    printf(" %s \n", entry->d_name);
}

//printf("name  --> %s -- \n", name);
//printf("*name with c - %c --> \n", *name);
//printf("*name with d - %d --> \n", *name);
//printf("*name with x - %x --> \n", *name);
//printf("&name with - p -> %p\n", &name);

//printf("argv -->  %s \n", *(argv+1));
return 0;
}
