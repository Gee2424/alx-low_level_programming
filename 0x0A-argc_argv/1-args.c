#include <stdio.h>
#include "main.h"
/* 
*@argc count of arguments
*@argv array of characters
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[]) {
		(void)argv;
        argc = argc-1;
        printf("%d\n", argc);

    return 0;
}

