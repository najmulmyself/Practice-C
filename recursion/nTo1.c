#include<stdio.h>
void solved(int n){
    if(n == 0) return ;
    printf("%d ",n);
    solved(n-1);
}
int main(){

    int n;
    scanf("%d",&n);

    solved(n);
}