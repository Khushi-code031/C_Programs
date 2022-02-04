#include <stdio.h>
#include<stdlib.h>
int main()
{
    int A[10],n,low=0,mid,key,i,high;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the input elements in sorted manner\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("Enter the key element for searching\n");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==key)
        {
            printf("Successful search element found at %d position",mid+1);
            exit(0);// Successful termination of the program from execution
        }
        else if(A[mid]>key)
             high=mid-1;
        else
             low=mid+1;
    }
    printf("Unsuccessful search");
    return 0;
}