#include<stdio.h>
#include<stdlib.h>

void tower_of_hanoi(int n,char src,char dest,char aux)
{
    if(n==1)
    {
        printf("Move disk 1 from rod %c to rod %c.\n",src,dest);
        return;
    }
    tower_of_hanoi(n-1,src,aux,dest);
    printf("Move disk %d from rod %c to rod %c.\n",n,src,dest);
    tower_of_hanoi(n-1,aux,dest,src);
}
int main()
{
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','C','B');
    return 0;
}