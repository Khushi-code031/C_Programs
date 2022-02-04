#include<stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    if (x<-4)
    {
        y=x+5;
        printf("%d",y);
        exit(0);
    }
    else if ((-4<=x)&&(x<=7))
    {
        y=(x*x)-(3*x)-4;
        printf("%d",y);
        exit(0);
    }
    else
    {
        y=(x*x*x)+(2*x);
        printf("%d",y);
        exit(0);
    }
    
    return 0;
}