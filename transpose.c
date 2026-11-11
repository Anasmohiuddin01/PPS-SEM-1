
#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose of the matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
