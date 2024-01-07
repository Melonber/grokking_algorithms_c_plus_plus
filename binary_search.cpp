#include <iostream>

// Binary search function
int binarySearch(const int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    // Perform binary search while the left boundary is less than or equal to the right boundary
    while (left <= right) {
        // Calculate the middle index
        int mid = left + (right - left) / 2;

        // If the middle element is equal to the target, return its index
        if (array[mid] == target) {
            return mid;
        }
        // If the middle element is greater than the target, adjust the right boundary
        else if (array[mid] > target) {
            right = mid - 1;
        }
        // If the middle element is less than the target, adjust the left boundary
        else {
            left = mid + 1;
        }
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    // Example array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);
    // Target value to search for
    int target = 7;

    // Call binarySearch function
    int result = binarySearch(array, size, target);

    // Display the result
    if (result != -1) {
        std::cout << "Element found at position " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
