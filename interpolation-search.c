#include <stdio.h>

int interpolation_search(int arr[], int size, int x) {
    int low = 0, high = size - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        if (low == high) {
            if (arr[low] == x) return low;
            return -1;
        }

        int pos = low + ((x - arr[low]) * (high - low)) /(arr[high] - arr[low]);

        if (arr[pos] == x) return pos;

        if (arr[pos] < x){
            low = pos + 1;
        }
        else{
            high = pos - 1;
        }
    }
    return -1;
}

int main(void) {
    int arr[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;//target

    printf("Enter number to search: ");
    scanf("%d", &x);

    int index = interpolation_search(arr, n, x);
    if (index != -1)
        printf("Found %d at index %d\n", x, index);
    else
        printf("%d not found\n", x);

    return 0;
}
