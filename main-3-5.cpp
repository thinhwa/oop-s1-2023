#include <iostream>

double sum_even(double array[], int n);

int main() {
    double myArray[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    double result = sum_even(myArray, size);
    std::cout << "Sum of Elements at Even Positions: " << result << std::endl; // Output: Sum of Elements at Even Positions: 9

    return 0;
}
