#include <iostream>
#include <limits>
int array_max(int integers[], int length);
int array_min(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    int input_array[] = {3, 1, 7, 2, 8, 5}; // Example input array

    int sum = sum_min_max(input_array, sizeof(input_array) / sizeof(input_array[0]));
    if (sum == -1) {
        std::cout << "Invalid input array!" << std::endl;
    } else {
        std::cout << "Sum of Min and Max: " << sum << std::endl;
    }

    return 0;
}