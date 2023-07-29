#include <iostream>

void two_five_nine(int array[], int n);

int main() {
    int myArray[] = {2, 5, 9, 2, 9, 9, 5, 2, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    two_five_nine(myArray, size);
    // Output: 2:3;5:3;9:3;

    return 0;
}
