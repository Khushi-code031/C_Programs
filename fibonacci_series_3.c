//Function without parameters and return value.
#include<stdio.h>
int fibonacci(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a=0,b=1,c=0;
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
    }
    
}
int main(){
    fibonacci();
    return 0;
}