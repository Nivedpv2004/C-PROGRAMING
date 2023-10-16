#include <stdio.h>

int isSorted(int arr[], int n) {
    if (n == 1 || n == 0) {
        return 1; // If the array has 0 or 1 element, it's considered sorted
    }

    if (arr[n - 1] < arr[n - 2]) {
        return 0; // If the last element is smaller than the second last, it's not sorted
    }

    return isSorted(arr, n - 1); // Recur for the remaining elements
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
