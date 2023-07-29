#include <iostream>

double array_mean(int array[], int n);

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    double result = array_mean(myArray, size);
    std::cout << "Mean: " << result << std::endl; // Output: Mean: 3

    return 0;
}
