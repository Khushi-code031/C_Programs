#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int idata;
    int data;
    struct node *link;
}NODE;
int main(){
    NODE *first,*second;
    NODE n1,n2;
    first=&n1;
    second=&n2;
    (*first).idata=79;
    (*second).idata=87;
    (*first).link=second;
    (*second).link=NULL;
    for(NODE *temp=first;temp!=NULL;temp=(*temp).link){
        printf("%d\n",(*temp).idata);
    }
    return 0;
}