#include <stdio.h>
#include <string.h>
int main()
{
    int t, n, pair[1000], len = 0, count = 0;
    char s[100];

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n);
        fgets(s, sizeof(s), stdin);
        len = strlen(s);
        // printf("%d\n",len);
    }
    for(int j = 0;j<t;j++){
        for(int i = 0;i<len-2;i++){
        if(s[i] != s[i+1]){
            count++;
        }
    }
    pair[j] = count;
    }

    for(int k = 0;k<t;k++){
        printf("%d\n", pair[k]);
    }
}