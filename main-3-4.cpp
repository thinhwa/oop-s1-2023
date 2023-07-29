#include <iostream>

void print_pass_fail(char grade);

int main() {
    char grade1 = 'A';
    char grade2 = 'D';
    char grade3 = 'F';

    print_pass_fail(grade1); // Output: Pass
    print_pass_fail(grade2); // Output: Fail
    print_pass_fail(grade3); // Output: Nothing

    return 0;
}
