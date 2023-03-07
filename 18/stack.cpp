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

#include <stack>

int main()
{
    std::stack<std::string> custs;
    custs.push("George");
    custs.push("Louise");
    custs.push("Florence");
    int size = custs.size();

    if(!custs.empty()){
        for(int i = 0; i < size; i++){
            std::cout << custs.top() << "\n";
            custs.pop();
        }
    } else {
        std::cout << "The stack is empty" << "\n";
    }

    return 0;
}