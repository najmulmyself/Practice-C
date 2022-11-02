#include<stdio.h>
int main(){
  int n,a[5];
  scanf("%d",&n);
  for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);

  }
    if(a[0]==a[1]){
      printf("YES");
    }else{
      printf("NO");
    }
}