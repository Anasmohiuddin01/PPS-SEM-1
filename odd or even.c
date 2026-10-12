#include<stdio.h>
//if even -> 1
//if odd -> 0
int main ()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
printf("%d", a % 2 == 0);
return 0;
}
