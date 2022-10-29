#include <stdio.h>
int main()
{
    long long int n, count = 0;
    scanf("%lld", &n);
    while (n > 0)
    {

        n = n / 10;

        count++;
    }

    printf("%d", count);
    return 0;
}