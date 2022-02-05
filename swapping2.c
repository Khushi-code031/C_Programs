#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("The numbers before swapping is %d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The numbers after swapping is %d %d\n",a,b);
    return 0;
}