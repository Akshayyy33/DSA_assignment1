// 2.	Write a C program to dynamically allocate memory for an array of N integers and perform insertion, display, sum, and average operations.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, pos, val;
    int *arr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc((n + 1) * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failure \n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;

    printf("\n After insertion:");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d \n", sum);
    printf("Average = %f ", (float)sum / n);

    free(arr);
    return 0;
}
