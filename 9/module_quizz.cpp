#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

std::vector<int> GenerateRandVec(int numElem, int minNum, int maxNum);

int main(){

    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);

    std::cout << "Initial Random Vector Generated : " << "\n";
    for(auto val: vecVals){
        std::cout << val << "\n";
    };

    int divisor;
    std::vector<int> vecVals2;
    std::cout << "List of Values Divisable by : ";
    std::cin >> divisor;

    std::copy_if(vecVals.begin(), vecVals.end(),
            std::back_inserter(vecVals2),
            [divisor](int x) { return (x % divisor) == 0; });

    std::cout << "Vector of Values Divisable by " <<
        divisor << " : \n";

    for(auto val: vecVals2){
        std::cout << val << "\n";
    }

    return 0;
}

std::vector<int> GenerateRandVec(int numElem, int minNum, int maxNum){
    std::vector<int> vecValues;
    
    // Seed the random number generator
    srand(time(NULL));
    
    int i = 0, randVal = 0;
    
    while(i < numElem){
        randVal = minNum + std::rand() % ((maxNum + 1) - minNum);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}