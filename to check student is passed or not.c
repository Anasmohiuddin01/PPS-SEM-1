#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks (1-100) :");
    scanf("%d",&marks);

    if(marks >= 0 && marks <=100)
    {
        printf("FAIL \n");
    }else if (marks > 30 && marks <= 100)
    {
        printf("PASS \n");
    }else {
          printf("wrong marks entered");
          }
}
