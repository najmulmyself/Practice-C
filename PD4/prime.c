#include <stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        count = 1;
    }
    // need to check 2 to n/2  ref:Math for programming (Number Divisibility)
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

    return 0;
}