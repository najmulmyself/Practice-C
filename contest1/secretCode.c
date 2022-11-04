#include <stdio.h>
int main()
{
    long long int t, nums[10000], count = 0;

    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &nums[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (nums[i] == 1)
        {
            count = 1;
        }
        for (int j = 2; j <= nums[i] / 2; j++)
        {

            if (nums[i] % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        count = 0;
    }
}