#include <stdio.h>
#include <string.h>
void changeChar(char sen[100]);
int main()
{
    char sen[100];
    fgets(sen, sizeof(sen), stdin);

    changeChar(sen[100]);
}

void changeChar(char sen[100])
{
    for (int i = 0; i < strlen(sen); i++)
    {
        if (sen[i] >= 65 && sen[i] <= 90)
        {
            printf("%s", sen[i] + 32);
        }
    }
}