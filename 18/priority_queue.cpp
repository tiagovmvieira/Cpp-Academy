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

#include <queue>

int main(){
    std::priority_queue<int> nums;
    nums.push(4);
    nums.push(8);
    nums.push(5);
    int size3 = nums.size();

    if(!nums.empty()){
        for(int i = 0; i < size3; i++){
            std::cout << nums.top() << "\n";
            nums.pop();
        }
    } else {
        std::cout << "The Priority Queue is empty" << "\n";
    }

    return 0;
}