#include <stdio.h>

void main(int argc, char *argv[])
{
    int i=0;

    while(argc > 0)
    {
        argc--;
        printf("hello, %s, welcome to linux!\n",argv[i++]);
    } 
}
