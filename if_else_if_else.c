#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    
    if( b<a && c<a ){
       printf("Greatest:%d",a);
    }
    else if( a<b && c<b ){
       printf("Greatest:%d",b);
    }
    else{
        printf("Greatest:%d",c);
    }
    return 0;
}