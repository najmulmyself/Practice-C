#include<stdio.h>
void twoToEven(int n);
int main(){
    int n;
    scanf("%d",&n);

    twoToEven(n);

}
void twoToEven(int n)
{
    for(int i=2;i<=n;i++){
        if(i%2 ==0){
            printf("%d ",i);
        }
    }
}