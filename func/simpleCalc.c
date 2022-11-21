#include<stdio.h>
int calc(int a,int b,char sign);
int main(){
    int a,b;
    char sign;
    scanf("%d %d\n",&a,&b);
    scanf("%c",&sign);
    calc(a,b,sign);
    printf("%d",calc(a,b,sign));
}

int calc(int a,int b,char sign)
{
    if(sign == '+'){
        return a+b;
    }
    else if(sign == '-'){
        return a-b;

    }
    else if(sign == '*'){
        return a*b;

    }
    else if(sign == '/'){
        return a/b;

    }
}