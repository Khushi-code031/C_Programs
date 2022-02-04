#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *num;
    num = (char *)malloc(1000 * sizeof(char));
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i = 0, j = 0;
    scanf("%s", num);
    num = (char *)realloc(num, (strlen(num)+1) * sizeof(char));
    while (i<strlen(num))
    {
        if (isdigit(num[i]) > 0) // checks if passed char is a digit or no. returns a non-zero value if digit ,else 0.
        {
            switch (num[i])
            {
            case '0':
                count[0]++;
                break;
            case '1':
                count[1]++;
                break;
            case '2':
                count[2]++;
                break;
            case '3':
                count[3]++;
                break;
            case '4':
                count[4]++;
                break;
            case '5':
                count[5]++;
                break;
            case '6':
                count[6]++;
                break;
            case '7':
                count[7]++;
                break;
            case '8':
                count[8]++;
                break;
            case '9':
                count[9]++;
                break;
            default:
                break;
            }
        }
        i++;
    }
    for (j = 0; j <=strlen(num); j++)
    {
        printf("%d", count[j]);
    }
    return 0;
}