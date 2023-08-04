#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    
    for (int i = number_of_digits - 1; i >= 0; i--) {
        if (binary_digits[i] == 1) {
            result += (1 << (number_of_digits - 1 - i));
        }
    }
    
    return result;
}


