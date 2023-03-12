#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

#include <regex>

void PrintMatches(std::string str, std::regex reg);
void PrintMatches2(std::string str, std::regex reg);

int main(){
    std::string str = "The ape was at the apex";
    std::regex reg ("(ape[^ ]?)");

    std::cout << "First Approach" << "\n";
    PrintMatches(str, reg);

    std::cout << "\n";

    std::cout << "Second Approach" << "\n";
    
    std::string str2 = "I picked the pickle";
    std::regex reg2 ("(pick([^ ]+)?)");
    PrintMatches2(str2, reg2);
    return 0; 
}

void PrintMatches(std::string str, std::regex reg){
    std::smatch matches;
    std::cout << std::boolalpha;

    while(std::regex_search(str, matches, reg)){
        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();
    }
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