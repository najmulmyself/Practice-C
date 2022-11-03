#include<stdio.h>
int main(){
    int N,K,runs[100],count=0;
    scanf("%d",&N);
    scanf("%d",&K);

    for(int i = 0;i<N;i++){
        scanf("%d",&runs[i]);
    }
    for(int i = 0;i<N;i++){
        if(runs[i]< K){
            count++;
        }
    }
    printf("%d",count);
}