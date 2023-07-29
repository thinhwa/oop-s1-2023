#include <iostream>

bool is_ascending(int array[], int n) {
    // If the size parameter is less than or equal to 1, the array is always considered ascending
    if (n <= 1) {
        return true;
    }

    for (int i = 1; i < n; i++) {
        if (array[i] < array[i - 1]) {
            return false; // Array is not in ascending order
        }
    }

    return true; // Array is in ascending order
}
