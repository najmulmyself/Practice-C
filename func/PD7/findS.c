#include <stdio.h>
#include <string.h>
int findStr(char str[100]);
int main()
{
    char str[100];
    int flag = 0;
    fgets(str, sizeof(str), stdin);

    flag = findStr(str);
    if (flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
int findStr(char str[100])
{
    int o = 0, n = 0, s = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            o++;
        }
        else if (str[i] == '7')
        {
            s++;
        }
        else if (str[i] == '9')
        {
            n++;
        }
    }
    if (o >= 1 && s >= 1 && n >= 1)
    {
        return 1;
    }
}