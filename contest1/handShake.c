#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i++; j <= n; j++)
        {
            count++;
        }
        
    }
    printf("%d",count);
    
}