#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n>1){
        if(n%2 ==0){
            printf("%d ,",n/2);
            n= n/2;
        }
        else{
            printf("%d, ",n);
            n = n-1;
            printf("%d, ",n);
        }
    }
    
    
    return 0;
}