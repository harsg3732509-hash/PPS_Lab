#include <stdio.h>

int main() {
    float length, width, area;
    printf("enter the length of rectangle: ");
    scanf("%f", &length);

    printf("enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("the area of rectangle is %.2f square units.\n", area);

    return 0;
}

