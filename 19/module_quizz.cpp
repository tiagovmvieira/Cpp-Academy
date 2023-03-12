#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

#include <regex>

void PrintMatches2(std::string str, std::regex reg);

int main(){
    // ----- PROBLEM -----
    // Create a Regex that matches email addresses
    // from a list
    // 1. 1 to 20 lowercase and uppercase letters,
    // numbers, plus ._%+-
    // 2. An @ symbol
    // 3. 2 to 20 lowercase and uppercase letters,
    // numbers, plus .-
    // 4. A period
    // 5. 2 to 3 lowercase and uppercase letters


    std::string str = "db@aol.com m@.com @apple.com db@.com";
    std::regex reg ("[\\w._%+-]{1,20}@[\\w.-]{2,20}.[A-Za-z]{2,3}");

    PrintMatches2(str, reg);

    return 0;
}

void PrintMatches2(std::string str, std::regex reg){
    std::sregex_iterator currentMatch(str.begin(), str.end(), reg);

    std::sregex_iterator lastMatch;
    while(currentMatch != lastMatch){
        std::smatch match = *currentMatch;
        std::cout << match.str() << "\n";
        currentMatch++;
    }
    std::cout << std::endl;
}
