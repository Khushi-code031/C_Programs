#include<stdio.h>
int convert(int bin);
int main(){
    int dec,bin;
    printf("Enter a binary number\n");
    scanf("%d",&bin);
    dec=convert(bin);
    printf("The decimal equvivalent of %d is %d\n",bin,dec);
    return 0;
}
int convert(int bin){
    if(bin==0){
        return 0;
    }
    else{
        return (bin%10+2*convert(bin/10));
    }
}