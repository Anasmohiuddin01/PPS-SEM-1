#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    printf("Hello, World!\n");
    printf("%s", s);

    return 0;
}
