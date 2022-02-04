#include<stdio.h>

int main(){
    int num,sum=0,pdt=1,SUM,rem;
    scanf("%d",&num);
    int NUM=num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        sum=sum+rem;
        pdt=pdt*rem;
    }
    SUM=sum+pdt;
    if (SUM==NUM)
    {
        printf("yes\n");
    }
    else{
        printf("no");
    }
    return 0;
}