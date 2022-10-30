#include <stdio.h>

int main(){
    // int x  =10;
    // int *p;

    // printf("Value of x : %d\n",x);

    // p = &x;
    // p = &x;

    // printf("content of p is : %d\n",*p);
    // printf("content of p is : %d\n",p);

    // p = &x;
    // *p = 20;

    // printf("Value of x : %d\n",x);

    // x =15;

    // printf("Value of x : %d\n",x);
    // printf("Value stored at location %p is %d\n",p,*p);

    // printf("Address  of x : %p\n",&x);
    // printf("Value  of p : %p\n",p);

    int x = 10 ,y;
    int *p,*q;

    p = &x;
    y = *p;
    *p = 15;
    *q= 20;

    printf("Value of x : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *p : %d\n",*p);
    printf("Value of *q : %d\n",*q);


    return 0;
}