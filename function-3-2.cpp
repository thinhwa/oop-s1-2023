#include <iostream>
#include <algorithm> // Include the algorithm header for sorting

int median_array(int array[], int n) {
    // Return 0 if the size parameter is even or less than 1
    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    // Sort the array in ascending order
    std::sort(array, array + n);

    // Calculate the index of the median element
    int medianIndex = n / 2;

    // Return the median element
    return array[medianIndex];
}
