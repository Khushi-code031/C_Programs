#include<stdio.h>
int A(int m,int n){
    if(m==0){
        return n+1;
    }
    else if((m!=0) && (n==0)){
        return A(m-1,1);
    }
    else{
        return A(m-1,A(m,n-1));
    }
}
int main(){
    int a;
    a=A(1,3);
    printf("%d\n",a);
    return 0;
}