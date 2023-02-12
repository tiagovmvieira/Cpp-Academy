#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::string TrimWhiteSpaces(std::string theString);

int main(){

    std::string aStr = "     Just some random words     ";

    aStr = TrimWhiteSpaces(aStr);
    std::cout << "*" << aStr << "*\n";

    return 0;
}

std::string TrimWhiteSpaces(std::string theString){
    std::string sTrimed(" \t\f\n\r");

    theString.erase(theString.find_last_not_of(sTrimed) + 1);
    theString.erase(0, theString.find_first_not_of(sTrimed));

    return theString;
}