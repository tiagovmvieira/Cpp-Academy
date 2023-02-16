#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

int Factorial(int number);

int main(){
    std::cout << "Factorial 3 = " << Factorial(3) << "\n"; 
    return 0;
}

int Factorial(int number){
    if(number == 1){
        return 1;
    } else {
        int result = number * Factorial(number - 1);
        return result;
    }
}