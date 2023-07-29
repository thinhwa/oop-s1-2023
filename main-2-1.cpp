#include <iostream>

int min_element(int array[], int n);

int main() {
    int myArray[] = {5, 2, 8, 1, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = min_element(myArray, size);
    std::cout << "Minimum element: " << result << std::endl; // Output: Minimum element: 1

    return 0;
}
