#include <iostream>

int num_count(int array[], int n, int number);

int main() {
    int myArray[] = {1, 2, 3, 2, 4, 5, 2};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int desiredNumber = 2;

    int result = num_count(myArray, size, desiredNumber);
    std::cout << "Count of " << desiredNumber << ": " << result << std::endl; // Output: Count of 2: 3

    return 0;
}
