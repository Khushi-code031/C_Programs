#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
} s[50];
int main()
{
    struct student temp;
    int n, a;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter Employee details\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        scanf("%d%s", &s[i].id, s[i].name);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            if ((strcmp(s[k].name, s[k + 1].name)) == 1)
            {
                temp = s[k];
                s[k] = s[k + 1];
                s[k + 1] = temp;
            }
        }
    }
    printf("The Employees in the alphabetical order is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\n", s[i].name, s[i].id);
    }
    return 0;
}