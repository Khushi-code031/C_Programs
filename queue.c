#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void insert(int ele, int *r, int Q[])
{
    (*r)++;
    Q[(*r)] = ele;
}
void delete(int *f, int Q[])
{
    int i = Q[(*f)];
    printf("The deleted item is :%d\n",i);
    (*f)++;
}
int main()
{
    int Q[SIZE];
    int r = -1; // insert
    int f = 0;  // delete
    int ch, ele, n;
    printf("Enter n\n");
    scanf("%d", &n);
    for (;;)
    {
        printf("Enter choice:\n");
        printf("1.Insert\t2.Display and Delete\t3.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (r == (n - 1))
            {
                printf("Queue full\n");
                break;
            }
            printf("Enter element\n");
            scanf("%d", &ele);
            insert(ele, &r, Q);
            break;

        case 2:
            if (f > r)
            {
                printf("Queue empty\n");
                break;
            }
            delete(&f,Q);
            break;
        case 3: printf("The queue elements are\n");
                for (int i = f; i <=r; i++)
                {
                    printf("%d\n",Q[i]);
                }
                break;
        case 4:
            exit(0);
            break;

        default:
            exit(0);
            break;
        }
    }
    return 0;
}