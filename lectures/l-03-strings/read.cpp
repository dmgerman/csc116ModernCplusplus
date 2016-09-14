#include <iostream>
#include <string>

int main()
{
    std::string name {};
    std::cout << "What is your name?" << std::endl;
    if (getline(std::cin, name)) {
        std::cout << "Your name is " + name << std::endl;
    } else {
        std::cout << "You did not provide a name :(" << std::endl;
    }
    return 0;
}
