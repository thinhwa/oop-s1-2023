#include <iostream>

int array_sum(int array[], int n);

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = array_sum(myArray, size);
    std::cout << "Sum: " << result << std::endl; // Output: Sum: 15

    return 0;
}
