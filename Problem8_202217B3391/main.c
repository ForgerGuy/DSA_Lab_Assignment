#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {  // Outer loop
        min_idx = i;  // Initialize min_idx
        for (j = i + 1; j < n; j++) {  // Inner loop
            if (arr[j] < arr[min_idx]) {  // Comparison
                min_idx = j;  // Update min_idx
            }
        }
        int temp = arr[min_idx];  // Swap
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
