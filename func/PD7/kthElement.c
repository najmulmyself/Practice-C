// #include <stdio.h>
// void findKElement(int n, int k);
// void createArr(int e,int k);
// int main()
// {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     findKElement(n, k);
// }
// void findKElement(int n, int k)
// {
//     // int element[100], count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             // element[i - 1] = i;
//             // count++;
//             // printf("%d kkkkkkkkkkkkkkk",k);
//             createArr(i,k);
//             printf("%d ", i);
//         }
//     }
//     for (int j = 1; j <= n; j++)
//     {
//         if (j % 2 != 0)
//         {
//             // element[count - 1] = j;
//             createArr(j,k);
//             printf("%d ", j);
//         }
//     }
//     printf("\n");
// }

// int createArr(int e,int k){
//     for (int i = 0; ; i++)
//     {
//         int arr[100];
//         arr[i]  = e;
        
//     }
//         printf("The %dth element in this sequence is %d\n", k, arr[0]);
//     // return arr;
    
// }



#include <stdio.h>
int main()
{
    int i, j, n, k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=2, j=0; i<=n,j<n/2; i+=2,j++)
        arr[j]=i;
    for(i=1, j=n/2; i<=n,j<n; i+=2,j++)
        arr[j]=i;
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
        printf("\n");
    printf("The %dth element in this sequence is %d.\n",k,arr[k-1]);
    return 0;
}


