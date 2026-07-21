#include <stdio.h>
int main()
{
    int a;
    printf("maximum marks is 100");

    printf("enter your marks");
    scanf("%d", &a);
    if (a >= 90);
    {
        printf("Grade A");
    }
    else if (a >= 80)
    {
        printf("Grade B");
    }
    else if (a >= 70)
    {
        printf("Grade C");
    }
    else if (a >= 60)
    {
        printf("Grade D");
    }
    else if (a >= 50)
    {
        printf("Grade E");
    }
    else
        printf("fail");
}