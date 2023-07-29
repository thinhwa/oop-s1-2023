#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int anotherArray[] = {5, 4, 3, 2, 1};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = sum_two_arrays(myArray, anotherArray, size);
    std::cout << "Sum of the two arrays: " << result << std::endl; // Output: Sum of the two arrays: 20

    return 0;
}
