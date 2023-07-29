#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int ascendingArray[] = {1, 2, 3, 4, 5};
    int descendingArray[] = {5, 4, 3, 2, 1};
    int size = sizeof(ascendingArray) / sizeof(ascendingArray[0]);

    bool result1 = is_ascending(ascendingArray, size);
    bool result2 = is_ascending(descendingArray, size);

    std::cout << "Ascending Array: " << result1 << std::endl; // Output: Ascending Array: 1 (true)
    std::cout << "Descending Array: " << result2 << std::endl; // Output: Descending Array: 0 (false)

    return 0;
}
