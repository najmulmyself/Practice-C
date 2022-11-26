#include <stdio.h>
void findKElement(int n, int k);
void createArr(int e,int k);
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    findKElement(n, k);
}
void findKElement(int n, int k)
{
    int element[100], count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            element[i - 1] = i;
            count++;
            printf("%d ", i);
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
        {
            element[count - 1] = j;
            printf("%d ", j);
        }
    }
    printf("\n");
}

void createArr(int e,int k){
    for (int i = 0; ; i++)
    {
        int arr[100];
        arr[i]  = e;
        
    }
        printf("The %dth element in this sequence is %d\n", k, arr[k]);

    
}
