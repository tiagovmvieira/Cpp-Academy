#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<int> Range(int StartNum, int EndNum, int Step);

bool IsPrime(int theNum);

std::vector<int> GetPrimes(int maxNum);


int main(){

    int num = 0;
    std::cout << "Number to Check : ";
    std::cin >> num;
    
    std::cout.setf(std::ios::boolalpha);
    std::cout << "Is " << num << " Prime " << IsPrime(num) << "\n";

    std::cout << "Generate Primes up to ";
    int maxPrime;
    std::cin >> maxPrime;
    std::vector<int> primeList = GetPrimes(maxPrime);
    for(auto x: primeList){
        std::cout << x << "\n";
    }
}

std::vector<int> Range(int StartNum, int EndNum, int Step){
    int i = StartNum;

    std::vector<int> range;
    while(i <= EndNum){
        range.push_back(i);
        i += Step;
    }

    return range;
}

bool IsPrime(int theNum){
    for(auto n : Range(2, theNum - 1, 1)){
        if ((theNum % n) == 0){
            return false; 
        }
    }
    return true;
}

std::vector<int> GetPrimes(int maxNum){
    std::vector<int> vecPrimes;
    for(auto x: Range(2, maxNum, 1)){
        if(IsPrime(x)){
            vecPrimes.push_back(x);
        }
    }
    return vecPrimes;
}