#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("The sum of first %d numbers is :%d\n",n,sum);
    return 0;
}