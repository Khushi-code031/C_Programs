#include<stdio.h>
int factorial(int n);
int main(){
    int a=5;
    int c=factorial(a);
    printf("The factorial of %d is %d\n",a,c);
    return 0;
}
int factorial(int n){
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}