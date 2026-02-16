//Section 1

#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    **pp = 42;

    // TODO: complete the output statements
    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", **pp);

    return 0;
}

/*
4. What are the types of the following expressions?
- x - integer
- p - pointer auf adresse von x
- *p - pointer auf value von x
- pp - pointer auf pointer von x
- *pp - poiinter auf adresse von pointer von x
- **pp - pointer auf pointer auf value von x
*/