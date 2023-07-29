#include <iostream>

int count_evens(int number);

int main() {
    int n = 10;

    int result = count_evens(n);
    std::cout << "Number of even numbers between 1 and " << n << ": " << result << std::endl; // Output: Number of even numbers between 1 and 10: 5

    return 0;
}
