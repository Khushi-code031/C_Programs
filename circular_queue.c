#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
void insert(char ele,int *r,char CQ[],int *count,int n){
    (*r)=(*r+1)%n;
    CQ[*r]=ele;
    (*count=(*count)+1);
    return;
}
char delete(int *f,char CQ[],int *count,int n){
    char del_ele=CQ[(*f)];
    *f=((*f)+1)%n;
    (*count=(*count)-1);
    return del_ele;
}
void display(int f,char CQ[],int count,int n){
    for ( int i =1; i <=count; i++)
    {
        // *f=((*f)+1)%n;
        printf("%c\n",CQ[(f)]);
        f=(f+1)%n;
    }
    
}
int main(){
    char CQ[MAX_SIZE],ele,del_ele;
    int f=0,r=-1,count=0,ch,n;
        printf("Enter the size of queue\n");
        scanf("%d",&n);
    for (;;)
    {
        printf("Enter a choice\n");
        printf("1.Insert\t2.Delete\t3.Display\t4.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: 
                if(count==n){
                printf("Queue Full\n");
                break;
            }
               printf("Enter an element\n");
               scanf("\n%c",&ele);
               insert(ele,&r,CQ,&count,n);
               break;
        case 2: 
                if(count==0){
               printf("Queue Empty\n");
               break;
            }
               del_ele=delete(&f,CQ,&count,n);
               printf("Deleted item:%c\n",del_ele);
               break;
        case 3:display(f,CQ,count,n);
                break;
        case 4:exit(0);
        default:exit(0);
            break;
        }
    }
    
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 100
// void CQ_insert(char ch_ele,char CQ[],int *count,int *rr,int n)
// {
//     *rr=(*rr+1)%n;
//     CQ[*rr]=ch_ele;
//     *count=*count+1;
//     return;
// }
// char CQ_delete(char CQ[],int *count,int *fr,int n)
// {
//     char del_ele=CQ[*fr];
//     *fr=(*fr+1)%n;
//     (*count)=((*count)-1);
//     return del_ele;
// }
// void display(int fr,int count,char CQ[],int n)
// {
//     if(count)
//     {
//     for(int i=1;i<count;i++)
//     {
//         printf("%c\t",CQ[fr]);
//         fr=(fr+1)%n;
//     }
//     printf("%c\t",CQ[fr]);
//     }
//     else
//     {
//         printf("Empty stack\n");
//     }
//     return;
// }

// int main()
// {
//     char CQ[SIZE],ch_ele,item_del;
//     int fr=0,rr=-1,count=0,n,choice;
//     printf("Ënter the size of the queue:\n");
//     scanf("%d",&n);
//     for(;;)
//     {
//         printf("1.Insert 2.Delete 3.Display 4.Exit\n");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             if(count==n)
//             {
//                 printf("Queue full\n");
//                 break;
//             }
//             scanf("\t%c",&ch_ele);
//             CQ_insert(ch_ele,CQ,&count,&rr,n);
//             break;
//             case 2:
//             if(count==0)
//             {
//                 printf("Stack empty\n");
//                 break;
//             }
//             item_del=CQ_delete(CQ,&count,&fr,n);
//             break;
//             case 3:
//             printf("The content of the Circular queue is:\n");
//             display(fr,count,CQ,n);
//             break;
//             case 4:
//             exit(0);
//             default:
//             printf("Enter a valid choice\n");
//             break;
//         }
//     }
//     return 0;
// }