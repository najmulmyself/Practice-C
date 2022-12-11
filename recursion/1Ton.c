#include<stdio.h>
    int s;
int solved(int n){
    if(n == 0) return 0;
    return  s = s + solved(n-1); 
}
int main(){

    int n;
    scanf("%d",&n);

    int s = solved(n);
    printf("%d",s);
}