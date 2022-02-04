#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int idata;
    struct node *link;
} NODE;
NODE *getnode()
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL)
    {
        printf("No memory");
        exit(0);
    }
    return temp;
}
NODE *insert_front(int ele, NODE *first)
{
    NODE *temp = getnode();
    temp->idata = ele;
    temp->link = first;
    return temp;
}
NODE *insert_rear(int ele, NODE *first)
{
    NODE *temp = getnode();
    temp->idata = ele;
    temp->link = NULL;
    if (first == NULL)
    {
        return temp;
    }
    NODE *ptr = first;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    return first;
}
NODE *delete_front(NODE *first)
{
    NODE *temp = first;
    if(first==NULL){
        return NULL;
    }
    first = first->link;
    printf("Deleted item:%d\n",temp->idata);
    free(temp);
    return first;
}
NODE *delete_rear(NODE *first)
{
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return NULL;
    }
    if (first->link == NULL)
    {
        printf("Deleted Item:%d\n", first->idata);
        free(first);
        return NULL;
    }
    NODE *prev, *present;
    present = first;
    while (prev->link != NULL)
    {
        prev = present;
        present = present->link;
    }
    printf("Deleted Item :%d\n", present->idata);
    free(present);
    prev->link = NULL;
    return first;
}
int main()
{
    NODE *first = NULL;
    int ch, ele;
    for (;;)
    {
        printf("Enter Choice:\n");
        printf("1.Insert from front\n2.Insert from rear\n3.Delete from front\n4.Delete from rear\n5.Display\n6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element\n");
            scanf("%d", &ele);
            first = insert_front(ele, first);
            break;
        case 2:
            printf("Enter element\n");
            scanf("%d", &ele);
            first = insert_rear(ele, first);
            break;
        case 3:
            first = delete_front(first);
            break;
        case 4:
            first = delete_rear(first);
            break;
        case 5:
            if(first==NULL){
                printf("Linked list is empty\n");
            }
            for (NODE *temp = first; temp != NULL; temp = temp->link)
            {
                printf("%d\n", temp->idata);
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}