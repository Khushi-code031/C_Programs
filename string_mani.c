#include<stdio.h>
#include<string.h>
int Length(char *s);
int compare(char s1[], char s2[]);
void concat(char s1[], char s2[]);
int main()
{
char s1[200], s2[100]; 
int len,res,count;
printf("\n Enter the String s1: "); 
gets(s1);
printf("\n Enter the String s2 :");
gets(s2);
len = Length(s1);
printf("\n Length of the String s1 is : %d", len);
len = Length(s2);
printf("\n Length of the String s2 is : %d", len);
res = compare(s1, s2);
if(res == 0)
 printf("\n Both the Strings are Equal \n");
else
 printf("\n The Strings are not Equivalent \n");
concat(s1, s2);
printf("\n Concatenated string is :%s", s1);
return(0);
}
int Length(char *s)
{
int c=(strlen(s));
 return c;
}
int compare(char s1[], char s2[])
{
 int count = 0;
 while(s1[count] == s2[count])
 {
if(s1[count] == '\0' || s2[count] == '\0') break;
else count++;
 }
if(s1[count] == '\0' && s2[count] == '\0') return 0;
else return -1;
}
void concat(char s1[], char s2[]) 
{
int i, j;
i = strlen(s1);
for (j = 0; s2[j] != '\0'; i++, j++) 
 s1[i] = s2[j];
s1[i] = '\0';
}