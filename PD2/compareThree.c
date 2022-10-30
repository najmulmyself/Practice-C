#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    // if(a == b && a == c && b == c){
    //     printf("Numbers are equal");
    // }
    // else{
    //     printf("not equal");
    // }
    if (a == b && a == c)
    {
        printf("All is Equal");
    }
    else if (a > b)
    {
        if (a > c)
        {
            if (c == b)
            {
                printf("C and B is Equal");
            }
        }
        else
        {
            if (a == c)
            {
                printf("A and C is Equal");
            }
        }
    }
    else if (1)
    {
        if (a == b)
        {
            printf("A and B is Bigger");
        }
        else
        {
            if (a == c)
            {
                printf("A and C is Bigger");
            }
        }
    }

    return 0;
}