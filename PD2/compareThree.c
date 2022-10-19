#include<stdio.h>
int main(){
    int a , b , c;
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && a == c && b == c){
        printf("Numbers are equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}