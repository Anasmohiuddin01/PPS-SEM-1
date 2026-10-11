#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the two numbers;");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}
