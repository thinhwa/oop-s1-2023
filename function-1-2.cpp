#include <iostream>
#include <string>

std::string *readStrings(){
    std::string *strings = new std::string [10];

    for (int i = 0; i < 10; i++){
        std::cin >> strings [i];
    }
    return strings;
}

void printStrings(std::string *strings){
    for (int j = 0; j < 10; j++){
        std::cout << j << ") " << strings [j] << "\n";
    }
}