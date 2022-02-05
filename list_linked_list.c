#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int idata;
    char cdata[3];
    struct node *link;
}NODE;
NODE *getnode(){
    NODE *temp=(NODE *)malloc(sizeof(NODE));
    if (temp==NULL)
    {
        printf("No memory");
        exit(0);
    }
    return temp;
}
int count_of_node(NODE *first){
    NODE *temp;
    int count=0;
    if(temp==NULL){
        printf("Liked List is Empty\n");
        exit(0);
    }
    for(temp=first;temp!=NULL;temp=temp->link){
        count++;
    }
    return count;
}
int main(){
    NODE *first=NULL;
    first=getnode();
    first->idata=78;
    strcpy(first->cdata,"CAT");
    // first->link=NULL;
    NODE *second=getnode();
    second->idata=93;
    strcpy(second->cdata,"FAT");
    // second->link=NULL;
    first->link=second;
    NODE *third;
    third=getnode();
    third->idata=228;
    strcpy(third->cdata,"HAT");
    second->link=third;
    third->link=NULL;
    for(NODE *temp=first;temp!=NULL;temp=temp->link){
        printf("%d\n%s\n",temp->idata,temp->cdata);
    }
    int a=count_of_node(first);
    printf("The nodes in the list are :%d\n",a);
    return 0;
}