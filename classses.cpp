#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat()
        {
            std::cout << "This person is eating\n";
        }

        void sleep()
        {
            std::cout << "This person is sleeping\n";
        }

        void walk()
        {
            std::cout << "This person is walking\n";
        }
};

int main()
{
    Human person;

    person.name = "Thinh";
    person.occupation = "Homeless";
    person.age = 18;

    std::cout << person.name << '\n'

}