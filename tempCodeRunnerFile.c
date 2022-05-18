for (i = 0; i < m; i++)
    {
        for (j  = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
            if (j == n - 1)
            {
                printf("\n");
            }
        }
    }