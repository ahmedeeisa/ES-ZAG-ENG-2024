#include <stdio.h>

int main() {
    int numbers[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Numbers divisible by 3:\n");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 3 == 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}

