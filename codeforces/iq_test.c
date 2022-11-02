#include<stdio.h>
int main(){
    int n,a[100],countEven=0,countOdd=0;
    scanf("%d",&n);
    for(int i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i =0;i<n;i++){
        if(a[i]%2 == 0){
            countEven++;
        }
        else if (a[i]%2 != 0)
        {
            countOdd++;
        }
        
    }
    if (countEven)
    {
        /* code */
    }
    

}