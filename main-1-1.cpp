#include <iostream>

int *readNumbers();
void printNumbers(int *numbers);
int main() {
    int *numbers = readNumbers();
    printNumbers(numbers);

    delete[] numbers;
    return 0;

}