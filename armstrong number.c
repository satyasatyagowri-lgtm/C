1#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit_count = 0, sum = 0, cur_digit;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number to temp
    temp = n;

    // Count the number of digits
    while (temp != 0) {
        digit_count++;
        temp /= 10;
    }

    // Reset temp to the original number
    temp = n;

    // Calculate the sum of the digits raised to the power of digit_count
    while (temp != 0) {
        cur_digit = temp % 10; // Get the last digit
        sum += pow(cur_digit, digit_count); // Raise it to the power and add to sum
        temp /= 10; // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

