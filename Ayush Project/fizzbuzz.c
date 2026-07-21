#include <stdio.h>
int main()
{
    int a, b;

    printf("enter the value of a: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    { 
        if (b % 3 == 0 && b % 5 == 0)
        {
            printf("fizzbuzz\n");
        }

        else if (b % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (b % 5 == 0)
        {
            printf("buzz\n");
        }
        else
            printf("%d\n", b);
    }
}