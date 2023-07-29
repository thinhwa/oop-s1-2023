#include <iostream>

int max_element(int array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int maxNum = array[0]; // Assume the first element is the maximum

    for (int i = 1; i < n; i++) {
        if (array[i] > maxNum) {
            maxNum = array[i]; // Update maxNum if a larger element is found
        }
    }

    return maxNum;
}
