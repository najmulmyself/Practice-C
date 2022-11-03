#include <stdio.h>
int main()
{
    int t, s, a[5], total = 0, missingN;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &s);
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
            total = total + a[i];
            missingN = s - total;
        }

            printf("%d\n", missingN);
            total = 0;
    }
}
