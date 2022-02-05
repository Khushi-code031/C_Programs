#include<stdio.h>

int main(){
    int a,b;
    printf("The original numbers are %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are %d %d\n",a,b);
    return 0;
}