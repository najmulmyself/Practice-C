#include<stdio.h>
int main(){
  int n,a[5],m,i,v;

  scanf("%d",&n);
  for(i = 0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&m);
  for(i = 1;i<=m;i++){
    scanf("%d",&i);
    scanf("%d",&v);

    a[i] = a[i]+ v;
    
  }
  for(i = 0;i<n;i++){
    printf("%d ",a[i]);
  }
}