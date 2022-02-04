#include<stdio.h>

int main(){
    int i=1,n,factorial=1;
    printf("Enter n\n");
    scanf("%d",&n);
    do{
        factorial*=i;
        i++;
    }while(i<=n);
    printf("The factorial of %d is :%d",n,factorial);
    return 0;
}