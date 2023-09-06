#include <iostream>

class Honda {
    public:
        std::string model;
        int year;


void drive(){
    std::cout<< "Vrrm Vrmm"<< "\n" << "Now accelerating!" << std::endl;
}
void brake(){
    std::cout<< "..."<< "\n"<< "Now braking!"<< std::endl;
}
};

int main(){
    Honda car1;
    car1.model = "Honda Civic";
    car1.year = 2005;

    car1.drive();
    car1.brake();
    
    return 0;
}
