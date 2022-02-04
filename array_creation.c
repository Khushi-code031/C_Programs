#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void read(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int *n, int arr[])
{
    printf("The array elements are\n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void insert(int *n, int arr[])
{
    int pos,ele;
    printf("Enter Element to be inserted\n");
    scanf("%d",&ele);
    printf("Enter the position\n");
    scanf("%d", &pos);
    if ((pos >= 1) && (pos <= (*n) + 1))
    {
        (*n) = (*n) + 1;
        for (int i = (*n) - 1; i >= (pos - 1); i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = ele;
    }
    else
    {
        printf("Invalid position. Insertion not possible\n");
    }
}
void delete (int *n, int arr[])
{
    int pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    if ((pos >= 1) && (pos <= (*n) + 1))
    {
        for (int i = (pos - 1); i < (*n); i++)
        {
            arr[i] = arr[i + 1];
        }
        (*n) = (*n) - 1;
    }
}
int main()
{
    int ch,n, arr[SIZE];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    read(n, arr);
    for (;;)
    {
        printf("Enter a choice\n");
        printf("1.Insert\t2.Delete\t3.Display\t4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:insert(&n,arr);
                break;
        case 2:delete(&n,arr);
                break;
        case 3:display(&n,arr);
                break;
        case 4:exit(0);
        default:printf("Enter a vaild choice between 1-4\n");
                break;
        }
    }
    return 0;
}