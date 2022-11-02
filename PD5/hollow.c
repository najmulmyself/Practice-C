#include <stdio.h>
int main()
{
    int N = 5;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("#");
        }
        printf("\n");
    }
    for(int k = 1;k<=(N-2);k++){
        printf("#");
        for(int l =1 ; l<=(N-2);l++){
            printf(" ");
        }
        printf("#\n");
    }
    for (int i = 1; i <= N; i++)
    {
        printf("#");
    }
    return 0;
}