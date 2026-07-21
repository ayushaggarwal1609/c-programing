#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two number:");
    scanf("%d%d", &a, &b);
    printf("\nBefore Swap:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter Swap:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
}
