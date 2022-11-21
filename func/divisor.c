#include<stdio.h>
void divisor(int n);
int main(){
    int n;
    scanf("%d",&n);

    divisor(n);
}
void divisor( int n)
{
    for(int i = 1;i<=n;i++){
        if(n%i== 0){
            printf("%d ",i);
        }
    }
}