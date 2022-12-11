#include <stdio.h>
int main()
{
    int n = 3, sum = 0, flag = 0;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // diagonal sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + mat[i][j];
            }
        }
    }
    // column sum;
    for (int i = 0; i < n; i++)
    {
        int colSum = 0;
        for (int j = 0; j < n; j++)
        {
            colSum = colSum + mat[j][i];
        }
        if (sum == colSum)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    // row sum;

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum = rowSum + mat[i][j];
        }
        if (sum == rowSum)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
