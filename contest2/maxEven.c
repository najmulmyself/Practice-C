#include<stdio.h>
int main(){
    int n,arr[21],tempMaxEvern= 0,max= 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int k  = 1;k<=n;k++){
            if((arr[j] + arr[k])%2 == 0){
            tempMaxEven = arr[j]+ arr[k];
        }
        }
    }
}