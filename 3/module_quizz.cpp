#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int StartNum, int EndNum, int Step);

int main(){
    
    std::vector<int> range = Range(1, 10, 2);
    for(auto y: range) std::cout << y << "\n";

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
