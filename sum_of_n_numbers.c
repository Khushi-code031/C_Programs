#include<stdio.h>

int main(){
     int n, sum = 0, c, array[100];
    printf("Enter numbers:\n");
    scanf("%d", &n);

   for (int i = 0; i<n; i++)
   {
      scanf("%d", &array[i]);
      sum+=array[i];
   }

   printf("Sum = %d\n", sum);
    return 0;
}