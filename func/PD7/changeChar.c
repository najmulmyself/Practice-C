#include <stdio.h>
#include <string.h>
void changeChar(char sen[100]);
int main()
{
    char sen[100];
    fgets(sen, sizeof(sen), stdin);

    changeChar(sen);
}

void changeChar(char sen[100])
{
    for (int i = 0; i < strlen(sen) - 1; i++)
    {
        if (sen[i] >= 65 && sen[i] <= 90)
        {
            printf("%c", sen[i] + 32);
        }
        else
        {
            printf("%c", sen[i] - 32);
        }
    }
    printf("\n");
}