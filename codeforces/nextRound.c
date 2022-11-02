#include <stdio.h>
int main()
{
    int n, k, a[100], count = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 1; j <= n; j++)
    {
        if ((a[j] > 0) && (a[j] >= a[k]))
        {
            count++;
        }
    }
    printf("%d", count);
}