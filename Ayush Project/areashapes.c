#include <stdio.h>

int main()
{
    int ch;
    float length, breadth, area, radius, side;

    printf("Your Choices are:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter the side of square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The Area of Square is: %.2f\n", area);
        break;

    case 2:
        printf("Enter the length of rectangle: ");
        scanf("%f", &length);

        printf("Enter the breadth of rectangle: ");
        scanf("%f", &breadth);

        area = length * breadth;
        printf("The Area of Rectangle is: %.2f\n", area);
        break;

    case 3:
        printf("Enter the radius of circle: ");
        scanf("%f", &radius);

        area = 3.14159 * radius * radius;
        printf("The Area of Circle is: %.2f\n", area);
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}