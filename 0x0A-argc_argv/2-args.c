#include <stdio.h>
#include "main.h"
/* 
*@argc count of arguments
*@argv array of characters
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[]) {
		int i;
        for (i=0; i<argc; i++){
        printf("%s\n", argv[i]);
		}
    return 0;
}

