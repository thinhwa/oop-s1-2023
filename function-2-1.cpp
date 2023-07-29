#include <iostream>

int min_element(int array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int minNum = array[0]; // Assume the first element is the minimum

    for (int i = 1; i < n; i++) {
        if (array[i] < minNum) {
            minNum = array[i]; // Update minNum if a smaller element is found
        }
    }

    return minNum;
}
