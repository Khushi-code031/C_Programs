#include <stdio.h>
#include <conio.h>
void main()
{
    int m, n;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("Enter the value of n\n");
    scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n],i,j;
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<m;i++)
        {
		for(j=0;j<n;j++)
			printf("%5d",c[i][j]);
		printf("\n");
        }
}