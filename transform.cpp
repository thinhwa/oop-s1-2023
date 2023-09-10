#include <iostream>
#include <vector>

int main() {
    int number;
    std::vector<int> result; // Use a vector to store binary digits

    std::cout << "Please enter a number: ";
    std::cin >> number;

    while (number >= 2) {
        int baseTwo = number % 2;
        
        if (baseTwo == 0) {
            result.push_back(0); // Use push_back to add binary digits to the vector
        } else {
            result.push_back(1);
        }

        number = number / 2;
    }

    result.push_back(number); // Add the last binary digit (either 0 or 1)

    int length = result.size();

    std::cout << "The base two number is: ";

    for (int i = length - 1; i >= 0; i--) {
        std::cout << result[i];
    }

    std::cout << "\n";

    return 0;
}
