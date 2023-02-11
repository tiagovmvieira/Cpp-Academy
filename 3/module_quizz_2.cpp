#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int StartNum, int EndNum, int Step);

int main(){
    double investment = 0.0, interestRate = 0.0;
    std::cout << "How much to invest : ";
    std::cin >> investment;
    std::cout << "Interest Rate : ";
    std::cin >> interestRate;
    interestRate *= 0.01;
    
    for(auto y: Range(1, 10, 1)){
        investment += (investment * interestRate);
    }

    std::cout << "Value after 10 years : " << investment << "\n";

    return 0;
}

// FUNCTIONS
std::vector<int> Range(int StartNum, int EndNum, int Step){
    int i = StartNum;

    std::vector<int> range;
    while(i <= EndNum){
        range.push_back(i);
        i += Step;
    }

    return range;
}

// END FUNCTIONS
