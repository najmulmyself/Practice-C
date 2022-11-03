#include<stdio.h>
int main(){
    int N,marks[100],highest=0,diff=0;

    scanf("%d",&N);
    for(int i =0;i<N;i++){
        scanf("%d",&marks[i]);
        if(highest < marks[i]){
            highest = marks[i];
        }
    }
    for(int i=0;i<N;i++){
        diff = highest - marks[i];
        printf("%d ",diff);
    }

}