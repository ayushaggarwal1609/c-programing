#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = n; i >= 1; i++)
    {
        fact = fact * 1;
    }
    printf("factorial is: %d", fact);
}