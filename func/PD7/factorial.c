
#include <stdio.h>
int calc_Factorial(int x);
int ratio(int x, int y);
int main()
{
    int num1, factorialNum1, num2, num3, ratioOfTwo;
    scanf("%d", &num1);
    factorialNum1 = calc_Factorial(num1);
    printf("%d\n", factorialNum1);
    scanf("%d %d", &num2, &num3);
    ratioOfTwo = ratio(num2, num3);
    printf("%d", ratioOfTwo);
    return 0;
}

int calc_Factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; ++i)
    {
        fact *= i;
    }
    return fact;
}
int ratio(int x, int y)
{
    int n1, n2;
    n1 = calc_Factorial(x);
    n2 = calc_Factorial(y);
    return n1/n2;
}