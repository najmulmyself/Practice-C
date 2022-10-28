#include <stdio.h>
int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("a is largest");
    }
    else if(b>a && b>c && b>d){
        printf("b is largest");
    }
    
    else if(c>a && c>b && c>d){
        printf("c is largest");
    }
    
    else if(d>a && d>b && d>c){
        printf("d is largest");
    }
    return 0;
}