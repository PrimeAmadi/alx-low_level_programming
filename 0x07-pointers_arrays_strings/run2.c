#include <stdio.h>
#include "run2.h"

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: %s string1 string2\n", argv[0]);
        return 1;
    }

    char *s = argv[1];
    char *accept = argv[2];

    unsigned int len = _strspn(s, accept);

    printf("Initial segment length: %u\n", len);

    return 0;
}

