#include <cstdlib>
#include <iostream>

int main(){

    std::string sAge = "";
    std::cout << "Enter age : ";

    getline(std::cin, sAge);
    int iAge = std::stoi(sAge);

    if (iAge < 5){
        std::cout << "Too young for school\n";
    }   else if (iAge == 5){
        std::cout << "Go to Kindergarten\n";
    }   else if ((iAge >= 6) && (iAge <= 17)){
        int grade = iAge - 5;
        std::cout << "Go to grade " << grade << "\n";
    }   else {
        std::cout << "Go to college\n";
    }

    return 0;
}