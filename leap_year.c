#include <stdio.h>
#include <string.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }
    return 0;
}
