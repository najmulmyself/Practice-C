#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int n;
    fgets(str, sizeof(str), stdin);
    scanf("%d",&n);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            int asciiV = str[i];
            int value = asciiV+n;
            if(value>=122)
            {
                int dif = value - 122;
                str[i] = 96 + dif;
            }
            else
                str[i] +=n;
        }
    }

    printf("%s",str);

 return 0;
}