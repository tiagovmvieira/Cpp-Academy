#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>

std::vector<int> Range(int StartNum, int EndNum, int Step);

std::vector<int> GenerateRandVec(int numElem, int minNum, int maxNum);

int main()
{
    std::vector<int> vecVals = GenerateRandVec(10, 5, 50);
    for(auto x: vecVals){
        std::cout << x << "\n";
    }

    return 0;
}

std::vector<int> Range(int StartNum, int EndNum, int Step){
    int i = StartNum;

    std::vector<int> range;
    while(i <= EndNum){
        range.push_back(i);
        i += Step;
    }

    return range;
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