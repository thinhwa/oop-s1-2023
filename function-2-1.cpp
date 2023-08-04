#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    // Convert the decimal string to an integer
    int decimal_int = std::stoi(decimal_number);

    // Find the number of bits needed to represent the integer
    int num_bits = 0;
    int temp = decimal_int;
    while (temp > 0) {
        temp /= 2;
        num_bits++;
    }

    // Convert the integer to binary using std::bitset and print the result
    std::cout << std::bitset<32>(decimal_int).to_string().substr(32 - num_bits) << std::endl;
}


