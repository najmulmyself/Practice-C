#include<stdio.h>
int main(){
  int n,a[20];
scanf("%d",&n);
  for(int i = 1; i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=n; i>0;i--){
    printf("%d ",a[i]);
  }
}