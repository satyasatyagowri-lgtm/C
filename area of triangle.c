#include <stdio.h>

int main() {
    double base, height, area;

    // Prompt user for base and height
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Display the area
    printf("The area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, area);

    return 0;
}

