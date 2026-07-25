#include <stdio.h>
int main()
{
    int n = 6;
    int temp;
    int arr[6] = {45, 47, 78, 02, 45, 12};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + i];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}