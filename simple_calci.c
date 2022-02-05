#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    char op;
    printf("Enter the operator\n",op);
    scanf("%c",&op);
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is :%d\n",a,b,a+b);
        break;
    case '-':
        printf("The difference of %d and %d is :%d\n",a,b,a-b);
        break;
    case '*':
        printf("The product of %d and %d is :%d\n",a,b,a*b);
        break;
    case '/':
        if (b==0){
        printf("Divide by zero error.\n");
        exit(0);
    }
       else
       {
        printf("The answer of %d and %d is :%d\n",a,b,a/b);
       }
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}