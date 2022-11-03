#include <stdio.h>
int main()
{
    int t, nums[10000], count = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < t; i++)
    {

        for (int j = 2; j <= nums[j] / 2; j++)
        {
            if (nums[j] % i == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        // if (nums[i] == 1 || nums[i] == 0)
        // {
        //     count = 1;
        // }
        // for (i = 2; i <= nums[i] / 2; i++)
        // {
        //     if (nums[i] % i == 0)
        //     {
        //         count = 1;
        //         break;
        //     }
        // }
        // if (count == 0)
        // {
        //     printf("YES\n");
        // }
        // else
        // {
        //     printf("NO\n");
        // }
        //
    }
}