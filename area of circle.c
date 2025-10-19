#include <stdio.h>
#define pi 3.14
int main() {
    double radius, area;

    // Prompt user for radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area
    area = pi* radius * radius;

    // Display the area
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}

