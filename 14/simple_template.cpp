#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

template<typename T>
void Times2(T val){
    std::cout << val << " * 2 = " <<
            val * 2 << "\n";
}

int main(){
    std::cout << "This is a simple Template Demo" << "\n";

    Times2(5);
    Times2(4.5);

    return 0;
}