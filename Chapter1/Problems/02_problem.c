// Find out the area of circle and modify it to find out volume of cylinder given radius and height

#include <stdio.h>

int main()
{
    float radius, height, area, volume; // float is used to store decimal values
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius; // Area of circle = πr²

    printf("The Area of the circle is %.2f\n", area); //using .2f to print only 2 decimal places

    printf("Enter the height: ");
    scanf("%f", &height);
    volume = area * height; // Volume of cylinder = πr²h

    printf("The Volume of the cylinder is %.3f\n", volume); //using \n for new line

    return 0;
}