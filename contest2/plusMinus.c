// #include<stdio.h>
// int main(){
//     int N,count = 1,tempCount = 1;
//     char arr[101];

//     scanf("%d\n",&N);
//     fgets(arr,sizeof(arr),stdin);

//     for(int i = 0;i<N;i++){
//         if(arr[i]== arr[i+1]){
//             tempCount++;
//         }else{
//             if( tempCount  >= count){
//                  count = tempCount;
//               tempCount = 1;
//             }
//         }
//     }
//     printf("%d",count);
    
// }











#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, count=1, max=0;
    scanf("%d", &n);
    char s[100];
    scanf("%s", &s);

    for(i=0; i<(n-1); i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            if(max<count)
            {
                max= count;
            }
            count=1;
        }
    }
    if(max<count)
    {
        max= count;
    }
    printf("%d\n", max);
}