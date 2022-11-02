// #include<stdio.h>
// int main(){
//     int n;
// scanf("%d",&n);
//     for(int i =1; i<=n ; i++){
//         for(int j = 1;j<=i;j++){
//                 printf("    *    ");
//         }
//             printf("\n \n");
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int i, j, rows;

    //  Input rows to print from user /
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        // / Print trailing spaces /
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        // / Print hollow pyramid /
        for(j=1; j<=(i-1); j++)     
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows  j==1  j==(2i-1))
            {
                printf("");
            }
            else
            {
                printf(" ");
            }
        }

        // / Move to next line */
        printf("\n");
    }

    return 0;
    }