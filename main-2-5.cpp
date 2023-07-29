#include <iostream>

bool is_descending(int array[], int n);

int main() {
    int descendingArray[] = {5, 4, 3, 2, 1};
    int ascendingArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(descendingArray) / sizeof(descendingArray[0]);

    bool result1 = is_descending(descendingArray, size);
    bool result2 = is_descending(ascendingArray, size);

    std::cout << "Descending Array: " << result1 << std::endl; // Output: Descending Array: 1 (true)
    std::cout << "Ascending Array: " << result2 << std::endl; // Output: Ascending Array: 0 (false)

    return 0;
}
