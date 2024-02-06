#include <stdio.h>

int main() {
    int A, B;
    printf("Enter the starting value A: ");
    scanf("%d", &A);
    printf("Enter the ending value B: ");
    scanf("%d", &B);
    if (A <= B)
        {
        printf("Numbers from %d to %d:\n", A, B);
        for (int i = A; i <= B; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("Invalid input. A should be less than or equal to B.\n");
    }

    return 0;
}
