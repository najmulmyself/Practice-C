#include<stdio.h>
int main(){
    int N,count = 1,tempCount = 1;
    char arr[101];

    scanf("%d\n",&N);
    fgets(arr,sizeof(arr),stdin);

    for(int i = 0;i<N;i++){
        if(arr[i]== arr[i+1]){
            tempCount++;
        }else{
            if( tempCount  >= count){
                 count = tempCount;
              tempCount = 1;
            }
        }
    }
    printf("%d",count);
    
}