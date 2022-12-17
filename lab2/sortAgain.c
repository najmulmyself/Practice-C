#include<stdio.h>
#include<string.h>
int main(){
    char s[100],temp;
    int len;
    fgets(s,sizeof(s),stdin);
    // puts(s);
    printf("%d\n",s[1]);
    len = strlen(s);
    for(int i = 0;i<len-1;i++){
        if(s[i] > s[i+1]){
            temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }
    }
    puts(s);
    return 0;
}

