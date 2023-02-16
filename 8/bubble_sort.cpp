#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>

std::vector<int> GenerateRandVec(int numElem, int minNum, int maxNum);

void BubbleSort(std::vector<int>& theVec);

int main()
{
    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);

    BubbleSort(vecVals);
    for(auto x: vecVals)
        std::cout << x << "\n";

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

void BubbleSort(std::vector<int>& theVec){

    int i = theVec.size() - 1;
    while(i >= 1){
        int j = 0;

        while(j < i){
            printf("\nIs %d > %d ?\n", theVec[j], theVec[j + 1]);
            if(theVec[j] >= theVec[j + 1]){
                std::cout << "Switch\n";

                int temp = theVec[j];
                theVec[j] = theVec[j + 1];
                theVec[j + 1] = temp;
            } else {
                std::cout << "Don't Switch\n";
            }
            ++j;

            for(auto x: theVec){
                std::cout << x << ", ";
            }
        }
        std::cout << "\nEnd of Round\n";
        --i;
    }
}