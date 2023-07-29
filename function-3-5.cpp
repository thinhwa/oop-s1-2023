#include <iostream>

double sum_even(double array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    double sum = 0.0;

    for (int i = 0; i < n; i += 2) {
        sum += array[i];
    }

    return sum;
}
