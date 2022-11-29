#include <stdio.h>
void sort(int n,int arr[])
{
   
    int temp ;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if(arr[k]>arr[k+1]){
                temp = arr[k];
                arr[k]= arr[k+1];
                arr[k+1]= temp;
            }
        }
        
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    // kthLargest(arr,n);
    // kthSmallest(arr,n);
}
void kthLargest(int arr[],int k,int n){
    printf("%dth Largest element = %d",k,arr[n-k]);
}
void kthSmallest(int arr[],int k){

    printf("\n%dth Smallest element = %d",k,arr[k-1]);
}
int main()
{
    int n,k;
    scanf("%d\n", &n);
    int arr[n];

     for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(n,arr);
    scanf("%d",&k);
    kthLargest(arr,k,n);
    kthSmallest(arr,k);
    return 0;
}