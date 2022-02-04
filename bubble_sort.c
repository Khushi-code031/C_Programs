#include <stdio.h>

int main()
{
    int a[5],i,j,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    printf("The array elements are stored :\n");
    for(i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
    for (i=0;i<n-1;i++)// Number of passes (4 passes)
    {
     for(j=0;j<n-i-1;j++)// Each pass-> Compare two elements
     {
         if(a[j]>a[j+1])
         {
             int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
   }
   
    printf("\nThe sorted elements are  :\n");
    for(i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
    return 0;
}
