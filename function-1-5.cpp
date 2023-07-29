#include <iostream>

int count_evens(int number) {
    // Return 0 if the parameter is less than 1
    if (number < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            count++; // Increment count for each even number
        }
    }

    return count;
}
