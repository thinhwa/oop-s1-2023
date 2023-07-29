#include <iostream>

void two_five_nine(int array[], int n) {
    // Initialize counters for each number
    int countTwo = 0;
    int countFive = 0;
    int countNine = 0;

    // Loop through the array and count occurrences using a switch statement
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                countTwo++;
                break;
            case 5:
                countFive++;
                break;
            case 9:
                countNine++;
                break;
        }
    }

    // Print the results in the specified format
    std::cout << "2:" << countTwo << ";5:" << countFive << ";9:" << countNine << ";" << std::endl;
}
