#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

template<typename T>
T Add(T val, T val2){
    return val + val2;
}

template<typename T>
T Max(T val, T val2){
    return (val < val2) ? val2: val;
}

int main(){
    std::cout << "5 + 4 = " <<
        Add(5, 4) << "\n";

    std::cout << "5.5 + 4.6 = " <<
        Add(5.5, 4.6) << "\n";    
    
    std::cout << "Max 4 or 8 = " <<
        Max(4, 8) << "\n";

    std::cout << "Max A or B = " <<
        Max('A', 'B') << "\n";

    std::cout << "Max Dog or Car = " <<
        Max("Dog", "Cat") << "\n";

    return 0;
}