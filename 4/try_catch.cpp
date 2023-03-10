#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){
    double num1 = 0, num2 = 0;

    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2 : ";
    std::cin >> num2;

    try{
        if(num2 == 0){
            throw "Division by zero is not possible";
        } else {
            printf("%.1f / %.1f = %.2f\n", num1, num2, (num1 / num2));
        }
    }
    catch(const char* exp){
        std::cout << "Error : " << exp << "\n";
    }

    std::cout << "\n";

    try{
        std::cout << "Throwing exception \n";
        throw std::runtime_error("Error Occurred");
        std::cout << "Can you print me?\n";
    }

    catch(std::exception &exp){
        std::cout << "Handled Exception : " <<
                exp.what() << "\n";
    }

    catch(...){
        std::cout << "Default Exception\n";
    }

    return 0;
}