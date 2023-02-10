#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){

    std::vector<int> myVector(10);
    std::iota(std::begin(myVector), std::end(myVector),
            1);

    for(int i = 0; i < myVector.size(); ++i){
        if((myVector[i] % 2) == 0){
            std::cout << myVector[i] << " is even\n";
        }
    }

    return 0;
}