#include <stdio.h>

int main() {
    int rows, number = 1;

    // Input the number of rows
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (int i = 1; i <= rows; i++) {
        // Iterate through each column in the current row
        for (int j = 1; j <= i; j++) {
            // Print the current number and increment it
            printf("%d ", number);
            number++;
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
