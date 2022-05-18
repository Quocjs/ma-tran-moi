#include <stdio.h>

int main()
{
    int A[4][4], B[4][4], C[4][4];
    int sum = 0, i, j, k;

    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Nhap gia tri cua A[%d][%d]", i+1,j+1);
            scanf_s("%d", &A[i][j]);
            if (j == 3)
                printf("\n");
        }
    }

    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Nhap gia tri cua B[%d][%d]", i+1,j+1);
            scanf_s("%d", &B[i][j]);
            if (j == 3)
                printf("\n");
        }
    }

    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            C[i][j] = sum;
            sum  = 0;
        }
    }
    printf("\n");
    printf("ma tran A la:\n");
    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t", A[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
    printf("Ma tran B la:\n");
    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t", B[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
    printf("ma tran can tinh la:\n");
    for (i = 0; i < 4; i ++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t", C[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
    return 0;
}