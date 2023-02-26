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
    
    std::cout << "\n";

    std::sort(vecVals.begin(), vecVals.end(),
            [](int x, int y){ return x < y; });

    std::cout << "Sorted Random Vector Generated : " << "\n";
    for(auto val: vecVals){
        std::cout << val << "\n";
    }
    
    std::cout << "\n";

    std::vector<int> evenVecVals;

    std::copy_if(vecVals.begin(), vecVals.end(),
            std::back_inserter(evenVecVals),
            [](int x) { return (x % 2) == 0;});
    

    std::cout << "Even Vals from Random Vector Generated : " << "\n";
    for(auto val: evenVecVals){
        std::cout << val << "\n";
    }

    std::cout << "\n";

    int sum = 0;
    std::for_each(vecVals.begin(), vecVals.end(),
            [&](int x){sum += x; });
    std::cout << "Sum of the vals from Random Vector Generated : " << sum << "\n";

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