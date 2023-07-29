#include <iostream>

int num_count(int array[], int n, int number) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++; // Increment count for each element that matches the given number
        }
    }

    return count;
}
