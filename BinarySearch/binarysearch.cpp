#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    std::vector<int> arr;
    int n, target, element;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        std::cin >> element;
        arr.push_back(element);
    }

    std::cout << "Enter the target element: ";
    std::cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found" << std::endl;

    return 0;
}
