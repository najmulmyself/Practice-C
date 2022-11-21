// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t, n, pair[1000], len = 0, count = 0;
//     char s[100];

//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d\n", &n);
//         fgets(s, sizeof(s), stdin);
//         len = strlen(s);
//         // printf("%d\n",len);
//     }
//     for(int j = 0;j<t;j++){
//         for(int i = 0;i<len-2;i++){
//         if(s[i] != s[i+1]){
//             count++;
//         }
//     }
//     pair[j] = count;
//     }

//     for(int k = 0;k<t;k++){
//         printf("%d\n", pair[k]);
//     }
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int N;
        scanf("%d",&N);
        char s[N];
        scanf("%s",&s);
        int pair=0;
        for(int i=0; i<N; i++)
        {
            if(s[i]=='0' && s[i+1]=='1')
            {
                pair++;
            }
            else if(s[i]=='1' && s[i+1]=='0')
            {
                pair++;
            }
        }
        printf("%d\n",pair);
    }
}