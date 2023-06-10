#include <stdio.h>

int main(int argc, char *argv[]) {
    /* This line is added to explicitly ignore the unused parameter warning */
    (void)argc;
    printf("%s\n", argv[0]);
    return 0;
}
