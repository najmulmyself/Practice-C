#include<stdio.h>
int main(){
    int n,f;
    scanf("%d",&n);
    scanf("%d",&f);

    for(int i = 0; i<f;i++){
        if(n%10 == 0){
            n = n/10;
        }else{
            n = n-1;
        }
    }
    printf("%d",n);
}