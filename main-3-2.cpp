#include <iostream>

int median_array(int array[], int n);

int main() {
    int myArray[] = {3, 5, 2, 1, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = median_array(myArray, size);
    std::cout << "Median: " << result << std::endl; // Output: Median: 3

    return 0;
}
