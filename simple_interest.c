#include<stdio.h>

int main(){
    int P,R,T,SI;
    printf("Enter P\n");
    scanf("%d",&P);
    printf("Enter R\n");
    scanf("%d",&R);
    printf("Enter T\n");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("The value of simple interest:%d",SI);
    return 0;
}