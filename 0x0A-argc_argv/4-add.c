#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 
*@argc count of arguments
*@argv an array of strings
*Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[]) {
    int sum = 0;
    int num;
    int i, j;

    for(i = 1; i < argc; i++) {
        for(j = 0; argv[i][j] != '\0'; j++) {
            if(!isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
        }

        num = atoi(argv[i]);
        sum += num;
    }
    
    printf("%d\n", sum);

    return 0;
}

