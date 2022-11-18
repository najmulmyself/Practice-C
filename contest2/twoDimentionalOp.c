#include <stdio.h>
int main()
{
    int N, M, arr[101][101];

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((arr[i][j] == i + 1) && arr[i][j] == j + 1)
            {
                arr[i][j] = arr[i][j] + 3;
            }
            else if (arr[i][j] == i + 1)
            {
                arr[i][j] = arr[i][j] + 2;
            }
            else if (arr[i][j] == j + 1)
            {
                arr[i][j] = arr[i][j] + 1;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}