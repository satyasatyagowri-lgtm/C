#include <stdio.h>

int main() {
    double length, width, area;

    // Prompt user for length and width
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate area
    area = length * width;

    // Display the area
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f\n", length, width, area);

    return 0;
}

