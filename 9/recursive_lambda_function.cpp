#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

int main(){

    std::function<int(int)> Fib = 
    [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};

    std::cout << "Fib 4 : " << Fib(4) < "\n";

    return 0;
}