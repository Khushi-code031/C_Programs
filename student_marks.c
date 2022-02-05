#include<stdio.h>

int main(){
    int marks;
    printf("Enter your Marks\n");
    scanf("%d",&marks);
    if(100>=marks && marks>=91){
       printf("Your grade is A\n");
    }
    else if(90>=marks && marks>=81){
        printf("Your garde is B\n");
    }
    else if(80>=marks && marks>=71){
        printf("Your grade is C\n");
    }
    else if (70>=marks && marks>=61){
        printf("Your grade is D\n");
    }
    else if(60>=marks && marks>=51){
        printf("Your grade is E\n");
    }
    else{
        printf("You Failed!\n");
    }
    return 0;
}