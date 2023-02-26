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

    for(auto val: vecVals){
        std::cout << val << "\n";
    }

    std::cout << "\n";

    std::vector<int> doubleVec;

    std::for_each(vecVals.begin(), vecVals.end(),
                [&](int x){doubleVec.push_back(x * 2);});

    for(auto val: doubleVec){
        std::cout << val << "\n";
    }

    std::cout << "\n";

    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};
    std::vector<int> vec3(5);

    transform(vec1.begin(), vec1.end(),
            vec2.begin(), vec3.begin(),
            [](int x, int y) { return x + y; });

    for(auto val: vec3){
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