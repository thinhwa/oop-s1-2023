#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i] + secondarray[i]; // Add corresponding elements from both arrays to the sum
    }

    return sum;
}
