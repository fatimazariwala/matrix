#include<stdio.h>

int main()
{
    int sum=0;
   int arr[3][3],i,j;
  printf("Input elements in the matrix: \n");



   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++ )
       {
           scanf("%d",&arr[i][j]);
       }

   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++ )
       {
           printf("%d",arr[i][j]);
       }
  printf("\n");
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)

       {
           sum=arr[1][1]+arr[0][0]+arr[2][2];
       }
   } printf("\nSum of diagonal elements is %d\n",sum);
}
