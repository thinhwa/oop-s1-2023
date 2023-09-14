#include <iostream>

int *readNumbers (){
    int *numbers = new int[10];
    
    for (int i = 0; i <10; i++){
        std::cin>> numbers[i];
    }
    return numbers;
}

void printNumbers(int *numbers){
    for (int j = 0; j < 10; j++){
        std::cout << j << " " << numbers [j] << "\n";
    }
}