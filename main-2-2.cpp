#include <iostream>

int max_element(int array[], int n);

int main() {
    int myArray[] = {5, 2, 8, 1, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = max_element(myArray, size);
    std::cout << "Maximum element: " << result << std::endl; // Output: Maximum element: 8

    return 0;
}
