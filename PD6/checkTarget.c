#include<stdio.h>
int main(){
    int n,target,check=0,a[5];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&target);
    for(int i =0;i<n;i++){
        for(int j=0;j<i;j++){
            if((a[i]+a[j])==target){
                check++;
            }
        }
    }
    if(check == 1){
        printf("YES");
    }else{
        printf("NO");
    }
}