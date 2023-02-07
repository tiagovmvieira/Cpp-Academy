#include <cstdlib>
#include <iostream>

int main(){

    std::string sAge = "";
    std::cout << "Enter your age : ";

    getline(std::cin, sAge);
    int iAge = std::stoi(sAge);

    if ((iAge >= 1) && (iAge <= 18)){
        std::cout << "Important Birthday\n";
    } else if ((iAge == 21) || (iAge == 50)){
        std::cout << "Important Birthday\n";
    } else if ((iAge >= 65)){
        std::cout << "Important Birthday\n";
    } else {
        std::cout << "Not an Important Birthday\n";
    }

    return 0;
}