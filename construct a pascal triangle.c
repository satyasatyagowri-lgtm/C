#include <stdio.h>

int main()
{
    int no_row, c = 1, blk, i, j;
    printf("input no of rows: ");
    scanf("%d", &no_row);

    // outer loop for iterating over rows 
    for (i = 0; i < no_row; i++) {
        // inner loop for printing spaces 
        for (blk = 1; blk <= no_row - i; blk++) {
            printf("  ");
        }
        // inner loop for generating and printing pattern
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                // if it's the first column or first row, set c to 1
                c = 1;
            } else {
                // calculate the next pattern value
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
    
    return 0;
}

