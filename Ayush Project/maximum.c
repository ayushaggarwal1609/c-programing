#include <stdio.h>
int main()
{

    int n;
    printf("enter the value: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("the maximum value = %d\n", max);
    printf("the minimum value = %d\n", min);
}