#include <iostream>

int *readNumbers();
void printNumbers(int *numbers);
void hexDigits(int *numbers);
int main() {
    int *numbers = readNumbers();
    printNumbers(numbers);
    hexDigits(numbers);
    delete[] numbers;
    return 0;

}