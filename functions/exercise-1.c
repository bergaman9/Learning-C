#include <stdio.h>

float findArea(float width, float height)
{
    float area;
    area = width*height;
    return area;
}

int main()
{
    float heightRectangle, widthRectangle;
    float area;
    printf("Enter width: ");
    scanf("%f", &widthRectangle);
    printf("Enter height: ");
    scanf("%f", &heightRectangle);
    area = findArea(widthRectangle, heightRectangle);
    printf("The area of your given rectangle is: %.2f \n", area);
}