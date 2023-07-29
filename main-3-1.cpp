#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
    int fanArray1[] = {1, 2, 3, 2, 1};
    int fanArray2[] = {2, 4, 4, 2};
    int notFanArray1[] = {1, 2, 1, 2, 1};
    int notFanArray2[] = {1, 3, 5, 4, 2};

    int size1 = sizeof(fanArray1) / sizeof(fanArray1[0]);
    int size2 = sizeof(fanArray2) / sizeof(fanArray2[0]);
    int size3 = sizeof(notFanArray1) / sizeof(notFanArray1[0]);
    int size4 = sizeof(notFanArray2) / sizeof(notFanArray2[0]);

    std::cout << "Fan Array 1: " << is_fanarray(fanArray1, size1) << std::endl; // Output: Fan Array 1: 1 (true)
    std::cout << "Fan Array 2: " << is_fanarray(fanArray2, size2) << std::endl; // Output: Fan Array 2: 1 (true)
    std::cout << "Not Fan Array 1: " << is_fanarray(notFanArray1, size3) << std::endl; // Output: Not Fan Array 1: 0 (false)
    std::cout << "Not Fan Array 2: " << is_fanarray(notFanArray2, size4) << std::endl; // Output: Not Fan Array 2: 0 (false)

    return 0;
}
