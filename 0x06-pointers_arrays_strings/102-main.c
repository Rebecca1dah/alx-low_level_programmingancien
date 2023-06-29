#include "main.h"
#include <stdio.h>

int main() {
    int a[] = {3, 6, 98, 23, 7};
    int *p = &a[2];

    // New line added
    printf("a[2] = %d\n", *(p));

    // Rest of the code
    *p = 42;

    printf("%d\n", *p);

    return 0;
}

