#include<stdio.h>
int sum=0;
void nToOne(int n){

        printf("%d",n); nToOne;
         sum = sum + n;
        // printf("%d",sum); // sum of n
    if(n > 1)
     nToOne(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    nToOne(n);
}