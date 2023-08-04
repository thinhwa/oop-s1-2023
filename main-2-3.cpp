#include <iostream>

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);
int main() {
    int palindrome_array[] = {1, 2, 3, 2, 1};  // Example palindrome array
    int non_palindrome_array[] = {1, 2, 3, 4, 5};  // Example non-palindrome array

    int palindrome_sum = sum_if_palindrome(palindrome_array, sizeof(palindrome_array) / sizeof(palindrome_array[0]));
    std::cout << "Palindrome Sum: " << palindrome_sum << std::endl;

    int non_palindrome_sum = sum_if_palindrome(non_palindrome_array, sizeof(non_palindrome_array) / sizeof(non_palindrome_array[0]));
    std::cout << "Non-Palindrome Result: " << non_palindrome_sum << std::endl;

    return 0;
}