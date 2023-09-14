#include <iostream>
#include <string>

std::string *readStrings();
void printStrings(std::string *strings);
int main(){
    std::string *strings = readStrings();
    printStrings(strings);
    
    delete[] strings;
    return 0;
}