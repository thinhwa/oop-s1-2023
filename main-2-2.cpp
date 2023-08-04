#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_digits[] = {1, 0, 1};  // Example binary array
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

    int decimal_value = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Binary to Decimal: " << decimal_value << std::endl;
    
    return 0;
}