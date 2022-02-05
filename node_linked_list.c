#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    char cdata[3];
    int idata;
    struct node*link;
}NODE;
int main(){
    NODE *first=NULL;
    first=(NODE*)malloc(sizeof(NODE));
    strcpy(first->cdata,"CAT");
    first->idata=78;
    first->link=NULL;
    printf("%s\n%d\n",first->cdata,first->idata);
    return 0;
}