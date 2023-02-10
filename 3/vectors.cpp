#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){

    std::vector<int> myVector(10);
    std::iota(std::begin(myVector), std::end(myVector),
            0);

    for(int i = 0; i < myVector.size(); ++i){
        std::cout << myVector[i] << "\n";
    }
    
    std::cout << "\n";

    for(auto y: myVector) std::cout << y << "\n";

    int val = 8;
    if((val % 2) == 0){
        std::cout << val << " is even\n";
    } else {
        std::cout << val << " is odd\n";
    }

    return 0;
}