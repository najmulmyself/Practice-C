#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d", a + b);
        }
        else
        {
            printf("%d", a + c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("%d", b + c);
        }
        // else if (c >= b)
        // {
        //     printf("%d", b + c);
        // }
        else
        {
            // if(a>c){
            //     printf ("%d",a+b);
            // }else{

            // printf("%d", a + c);
            // }
            printf("%d", b+c);
        }
    }
}