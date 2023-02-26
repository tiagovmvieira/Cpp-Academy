#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>


std::vector<int> GenerateFibList(int numElems);

int main(){
    std::vector<int> ListOfFibs = GenerateFibList(20);

    for(auto val: ListOfFibs){
        std::cout << val << "\n";
    }

    return 0;
}

std::vector<int> GenerateFibList(int numElems){
    std::vector<int> vecFibValues;

    int i = 0;
    std::function<int(int)> Fib = 
    [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};

    while(i < numElems){
        vecFibValues.push_back(Fib(i));
        i++;
    }

    return vecFibValues;
}