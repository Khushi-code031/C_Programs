//Function with parameters and no return value.
#include<stdio.h>
void fibonacci(int n){
    int a=0,b=1,c=0;
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
    }
    
}
void main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    fibonacci(n);
    //return 0;
}