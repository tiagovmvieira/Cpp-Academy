#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

int Fib(int number);

int main(){
    int index;
    std::cout << "Get Fibonacci Index : ";
    std::cin >> index;
    printf("Fib(%d) = %d\n", index, Fib(index));

    return 0;
}

int Fib(int number){
    if(number == 0){
        return 0;
    } else if (number == 1){
        return 1;
    } else {
        int result = Fib(number - 1) + Fib(number - 2);
        return result;
    }
}
