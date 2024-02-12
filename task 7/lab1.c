#include <stdio.h>

int main()
{
    int arr1 [50];
    int i, max, min, n;
    printf("Input the number of elements  in the array :");
    scanf("%d", &n);
    printf("Input the elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    max = arr1[0];
    min = arr1[0];

    for (i = 1; i < n; i++)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
        }

        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
	return 0;
}
