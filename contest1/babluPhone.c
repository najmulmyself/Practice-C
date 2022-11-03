#include<stdio.h>
int main(){
    int t,n[101],time=0,rem=0;


    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d%%",&n[i]);
      
    }
    for(int i = 0; i<t;i++){
          if(n[i]<=60 && n[i]>= 0){
        rem = 60-n[i];
        time = rem+ 100;
        printf("%d minutes\n",time);
        
    }
    else if(n[i]<=80 && n[i]>60){
        rem = n[i]- 60;
        rem = rem *2;
        time = 100 - rem;
        printf("%d minutes\n",time);
    }
    else if(n[i]<=100 && n[i]>80){
        rem = 100-n[i];
        rem = rem *3;
        time = rem;
        printf("%d minutes\n",time);

    }
    }
    
}