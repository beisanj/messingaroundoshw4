
#include <stdlib.h>  
#include <stdio.h>

int main(int argc, char** argv){

    int x=atoi(argv[1]);
    void* newBlock = malloc(x);
    return 0;

}
