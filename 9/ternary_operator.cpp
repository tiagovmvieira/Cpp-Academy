#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

int main(){

    int age = 26;
    bool canIVote = (age >= 18) ? true : false;
    std::cout.setf(std::ios::boolalpha);
    std::cout << "Can Tiago Vote : " << canIVote << "\n";

    return 0;
}