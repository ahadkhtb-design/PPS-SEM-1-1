
#include <stdio.h>

int main()
{
    int a[2][2], transpose[2][2];
    int i, j;

    printf("Enter elements of 2x2 matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
