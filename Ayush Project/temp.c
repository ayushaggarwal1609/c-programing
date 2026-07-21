#include <stdio.h>
int main()
{
    int f, c;
    printf("enter temperature in fehranite: ");
    scanf("%d", &f);
    c = (f - 32) * 5 / 9;
    printf("temperature in celcius is:%d", c);
}