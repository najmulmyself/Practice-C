#include<stdio.h>
void sorted(int arr[], int n)
{
    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int i =0; i<(n-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
}
float findMedian(int arr[], int n)
{
    float median = 0;
    if(n%2 == 0)
        median = (arr[(n-1)/2]+arr[n/2])/2.0;
    else
        median = arr[n/2];

    return median;
}

int main()
{
    int n, arr[1000] ;
    printf("array size: ");
    scanf("%d",&n);
    float median = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sorted(arr, n);

    median = findMedian(arr, n);

    printf("\nMeidan of the array :%.1f \n",median);

    return 0;
}



