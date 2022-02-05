#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a==b&&a==c&&b==c)||(b==a&&b==c&&a==c)||(c==a&&c==b&&a==c))
    {
        printf("Equilateral Triangle\n");
    }
    else if ((a==b)||(b==c)||(c==a))
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
    return 0;
}