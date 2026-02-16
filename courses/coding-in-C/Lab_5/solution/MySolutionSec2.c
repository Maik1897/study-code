// Section 2


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        // using indexing
        printf("Argument %d at address \"%p\" has content: %s (length: %d)\n", i, argv[i], argv[i], strlen(argv[i]));
        printf("\n");
        // using pointer dereferencing
        printf("Argument %d at address \"%p\" has content: %s (length: %d)\n", i, *(argv + i), *(argv + i), strlen(*(argv + i)));
        printf("\n");

        printf("%d\n", argc);
    }

    return 0;

}