#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main(){
    std::vector<int> vectnRandNums(2);
    vectnRandNums[0] = 10;
    vectnRandNums[1] = 20;
    vectnRandNums.push_back(30);

    std::cout << "Last Index's Element : " <<
        vectnRandNums[vectnRandNums.size() - 1] << "\n";

    std::cout << "\n";
    //
    std::string sSentence = "This is a random string";
    std::vector<std::string> vectsWords;

    std::stringstream ss(sSentence);
    std::string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vectsWords.push_back(sIndivStr);
    }

    for(int i = 0; i < vectsWords.size(); ++i){
        std::cout << vectsWords[i] << "\n";
    }

    return 0;
}