#include <iostream>

bool is_fanarray(int array[], int n) {
    // Return false if the size parameter is less than 1
    if (n < 1) {
        return false;
    }

    int start = 0;      // Starting index of the array
    int end = n - 1;    // Ending index of the array

    while (start < end) {
        // Check if elements are equal and in ascending order
        if (array[start] != array[end] || array[start] > array[start + 1]) {
            return false; // Array is not a fan array
        }
        start++;          // Move to the next element from the start
        end--;            // Move to the next element from the end
    }

    return true; // Array is a fan array
}
