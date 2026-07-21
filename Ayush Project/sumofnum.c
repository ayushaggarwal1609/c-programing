#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int result = add(50, 70);
    printf("%d", result);
    return 0;
}