#include<stdio.h>
void plusToMinus(int n);
void minusToPlus(int n);
int main(){
    int n;
    scanf("%d",&n);

    if(n>0){
        plusToMinus(n);
    }
    else{
        minusToPlus(n);
    }
}

void plusToMinus(int n)
{
    for(int i = n;i>=-n;i--){
        printf("%d ",i);
    }
}
void minusToPlus(int n)
{
    for(int i = n;i<=((-n*2)+n);i++){
        printf("%d ",i);
    }
}