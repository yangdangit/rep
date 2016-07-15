#include <stdio.h>

void main(int argc, char *argv[])
{
    int i=0;

    while(argc > 0)
    {
        argc--;
        printf("Your command is [%s], welcome to linux world!\n",argv[i++]);
    } 
}
