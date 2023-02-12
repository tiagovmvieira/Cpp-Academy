#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

int main(){
    // a - z : 97 - 122
    // A - Z : 65 - 90

    std::string inputString, secretStr("");

    std::cout << "Enter an string : ";
    std::cin >> inputString;


    for(char c: inputString){
        secretStr += std::to_string((int)c - 23);
    }

    std::cout << "Secret : " << secretStr << "\n";

    inputString = "";

    for(int i = 0; i < secretStr.length(); i += 2){
        std::string sCharCode = "";
        sCharCode += secretStr[i];
        sCharCode += secretStr[i + 1];

        int nCharCode = std::stoi(sCharCode);
        char chCharCode = nCharCode + 23; // conversion
        inputString += chCharCode;
    }

    std::cout << "Original : " << inputString << "\n";

    return 0;
}