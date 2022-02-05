#include<stdio.h>

int main(){
     int n,i=0,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The sum of first %d numbers is :%d\n",n,sum);
    return 0;
}