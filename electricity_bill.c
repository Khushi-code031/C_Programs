#include<stdio.h>
int main()
{
	char name[20];
	int n;
	float amount;
	printf("Enter the consumer name\n");
	scanf("%s", name);
	printf("Enter no. of units consumed \n");
	scanf("%d",&n);
	if(n<=200)
	{
		amount=n*0.80;
		amount+=100;
	}
	else if(n>200 && n<=300)
	{
		amount=200*0.80;
		amount=amount+((n-200)*0.90);
		amount+=100;
	}
	else
	{
		amount=(200*0.80);
		amount=amount+(100*0.90);
		amount=amount+(n-300)*1;
		amount+=100;

		// amount=(n-300)*1;
		// amount=amount+(100*0.90);
		// amount=amount+(200*0.80);
		// amount+=100;
	}
	if(amount>400)
	{
		amount=amount+(0.15*amount);
	}

	printf("Total amount to be paid is %.2f Rs",amount);
    return 0;
}