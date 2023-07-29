#include <iostream>

double array_mean(int array[], int n) {
    // Return 0.0 if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i]; // Add each element to the sum
    }

    double mean = static_cast<double>(sum) / n; // Cast sum to double for floating-point division

    return mean;
}
