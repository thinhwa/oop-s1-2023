#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

int main(){
    std::string options[] = {"rock", "paper", "scissors"};
    srand(time(NULL));
    bool win = false;
    std::string play = "NULL";

    while (!win){
        std::string computer = options[(rand() % 3)];
        std::string player;
        std::cout << "Rock, Paper or Scissors? " << std:: endl;
        std::cin >> player;
        std::cout << "computer: " << computer << "\n";
        if ((player ==  "rock" || player == "Rock") &&(computer == "rock")){
            std::cout<< "Its a draw!" << "\n";
        }
        else if ((player ==  "rock" || player == "Rock") &&(computer == "paper")){
            std::cout << "You lost!"<<"\n" << "Do you want to go again? ";
            std::cin >> play;
            if ((play == "no" || play == "No")){
                break;
            }
        }
        else if ((player ==  "rock" || player == "Rock") &&(computer == "scissors")){
            std::cout << "You have won!" << "\n";
            win = true;
        }

        else if ((player ==  "scissors" || player == "Scissors") &&(computer == "Scissors")){
            std::cout<< "Its a draw!" << "\n";
        }
        else if ((player ==  "scissors" || player == "Scissors") &&(computer == "rock")){
            std::cout << "You lost!"<<"\n" << "Do you want to go again? ";
            std::cin >> play;
            if ((play == "no" || play == "No")){
                break;
            }
        }
        else if ((player ==  "scissors" || player == "Scissors") &&(computer == "paper")){
            std::cout << "You have won!" << "\n";
            win = true;
        }

        else if ((player ==  "paper" || player == "Paper") &&(computer == "paper")){
            std::cout<< "Its a draw!" << "\n";
        }
        else if ((player ==  "paper" || player == "Paper") &&(computer == "scissors")){
            std::cout << "You lost!"<<"\n" << "Do you want to go again? ";
            std::cin >> play;
            if ((play == "no" || play == "No")){
                break;
            }
        }
        else if ((player ==  "paper" || player == "Paper") &&(computer == "rock")){
            std::cout << "You have won!" << "\n";
            win = true;
        }
        else {
            std::cout << "Invalid input!" << std::endl;
        }
        }

    
}
