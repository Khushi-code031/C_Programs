#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d",1);
        exit(0);
    }
    while(n!=1){
        if(n%2==0){
            n=n/2;
            if (x<n)
            {
                x=n;
            }
        }
        else{
            n=((n*3)+1);
            if (x<n)
            {
                x=n;
            }
        }
    }
    printf("%d",x);
    return 0;
}