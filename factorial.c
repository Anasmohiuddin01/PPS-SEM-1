#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;
    printf("enter your number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)

        fact=fact*i;

    if (n>=0)
        printf("%d",fact);
    else
    printf("no factorial");
    return 0;
}
