#include <stdio.h>
int main()
{
    int n, a[100], countEven = 0, countOdd = 0, ans;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    if (countEven == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ans = i;
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 != 0)
            {
                ans = i;
                break;
            }
        }
    }
    printf("%d", ans);
}