#include <stdio.h>
int main()
{
    int target = 4;
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == target)
        {
            printf("index = %d", i);
        }
    }
}
