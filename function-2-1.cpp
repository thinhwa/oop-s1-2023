#include <iostream>

int *readNumbers(){
    int *numbers = new int[10];

    for (int i = 0; i < 10; i++){
        std::cin >> numbers [i];
    }
    return numbers;
}

void printNumbers(int *numbers){
    for(int j  = 0; j < 10; j++){
        std::cout << j << " " << numbers [j] << "\n";
    }
}

void hexDigits(int *numbers){
    
    for (int k = 0; k < 10; k++){
        int num = numbers [k];
        if (num >= 0 && num <=15 ){
        switch (num){
            case 0:
                std::cout << "0\n";
                break;
            case 1:
                std::cout << " 1\n";
                break;
            case 2:
                std::cout << " 2\n";
                break;
            case 3:
                std::cout << " 3\n";
                break;
            case 4:
                std::cout << " 4\n";
                break;
            case 5:
                std::cout << " 5\n";
                break;
            case 6:
                std::cout << " 6\n";
                break;
            case 7:
                std::cout << " 7\n"; 
                break;
            case 8:
                std::cout << " 8\n";
                break;
            case 9:
                std::cout << " 9\n";
                break;
            case 10:
                std::cout << " A\n";
                break;
            case 11:
                std::cout << " B\n";
                break;
            case 12:
                std::cout << " C\n";
                break;
            case 13:
                std::cout << " D\n";
                break;
            case 14:
                std::cout << " E\n";
                break;
            case 15:
                std::cout << " F\n";
                break;
        }
    }
    else {
        std::cout << "Unknown character!" << "\n";

    }
    }


}