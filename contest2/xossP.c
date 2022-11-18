#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
        printf("\n");

    for(int j =2;j<n;j++){
        printf("%d",j);
        for (int i = 0; i < n-2; i++)
        {
            printf(" ");
        }
        printf("%d\n",n);
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", n);
    }
}