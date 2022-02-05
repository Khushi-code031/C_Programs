#include<stdio.h>

int main(){;
    int num,n,rem,rev=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    printf("The reversed of %d is %d\n",n,rev);
    if(n==rev){
        printf("It is a palindrome!\n");
    }
    else{
        printf("It is not a palindrome!\n");
    }
    return 0;
}