//First Program in C

#include <stdio.h>
#include "usefulfunctions.h"

/* main() function every C program must have a main, it has a returnable 'int' this is for exit codes*/

int main(void) //void means no inout argument
{

        printf("Hello World!\n");
        printf("%d\n",sqr(225));
        printf("Goodbye World!\n");
        return 0; //return exit code 0, no error

}
