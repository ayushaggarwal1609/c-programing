#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("number is positive");
    }
    else if (num == 0)
    {
        printf("num is 0");
    }
    else
        printf("num is negative");
}