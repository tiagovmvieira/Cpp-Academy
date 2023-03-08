#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <ctime>

#include <set>

int main(){

    std::multiset<int> mset1 {1,1,2,3,4};
    mset1.insert(4);
    mset1.insert(0);

    if(!mset1.empty()){
        for(int i : mset1){
            std::cout << i << "\n";
        }
    } else {
        std::cout << "Set is empty" << "\n";
    }

    return 0;
}