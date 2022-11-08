#include <stdio.h>
#include <string.h>
int main()
{
    char name[101];
    int count = 0, duplicate = 0;

    fgets(name, sizeof(name), stdin);
    int nameLen = strlen(name);
    for (int i = 0; i < nameLen - 1; i++)
    { 
        for ( int j=i+1; j < nameLen - 1; j++)
        {
            // printf("%d %d \n",i,j);
            if (name[i] == name[j])
            {
                duplicate++;
                // count--;
            }

        }
        count++;
    }
    printf("%d",count);
    count = count- duplicate;
    printf("%d",count);
    if(count%2 ==0 && count > 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}
