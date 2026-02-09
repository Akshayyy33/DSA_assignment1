// 1.	Write a C program to dynamically allocate memory for an array, display elements, and properly free allocated memory before program termination 
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n, i;
    int *arr;

    printf("Number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failure \n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
