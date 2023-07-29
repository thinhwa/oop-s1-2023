#include <iostream>

double weighted_average(int array[], int n);

int main() {
    int myArray[] = {1, 2, 1, 4, 1, 3};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    double result = weighted_average(myArray, size);
    std::cout << "Weighted Average: " << result << std::endl; // Output: Weighted Average: 3.0

    return 0;
}
