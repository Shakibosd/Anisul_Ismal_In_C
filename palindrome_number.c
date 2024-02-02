#include <stdio.h>
#include <string.h>
int main()
{
    int num, r, sum = 0;
    scanf("%d", &num);
    int tmp = num;
    while (tmp != 0)
    {
        r = tmp % 10;
        sum = sum * 10 + r;
        tmp /= 10;
    }
    if (num == sum)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
