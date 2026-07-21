#include <stdio.h>
int hcf(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return hcf(b, a % b);
}
int main()
{
    int x, y;
    printf("enter two number: ");
    scanf("%d%d", &x, &y);
    printf("the hcf   of number is: %d", hcf(x, y));
}
