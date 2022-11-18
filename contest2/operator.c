#include <stdio.h>
#include <string.h>
int main()
{
    char s[21];
    int a, b, sum = 0;
    fgets(s, sizeof(s), stdin);

    scanf("%d %d", &a, &b);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '+')
        {
            sum = sum + (a + b);
        }
        else if (s[i] == '*')
        {
            sum = sum + (a * b);
        }
    }

    printf("%d", sum);
}