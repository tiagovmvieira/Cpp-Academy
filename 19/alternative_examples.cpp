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

    std::string str3 = "Cat rat mat fat pat";
    std::regex reg3 ("([crmfp]at)");
    PrintMatches2(str3, reg3);

    std::regex reg4 ("([C-Fc-f]at)");
    PrintMatches2(str3, reg4);

    std::regex reg5 ("([^Cr]at)");
    PrintMatches2(str3, reg5);

    std::string str6 = "Cat rat mat fat pat";
    std::regex reg6 ("([Cr]at)");
    std::string owlFood = std::regex_replace(str6, reg6, "Owl");
    std::cout << owlFood << "\n";
    
    std::cout << "\n";

    std::string str7 = "F.B.I. I.R.S. CIA";
    std::regex reg7 ("([^ ]\..\..\.)");
    PrintMatches2(str7, reg7);

    std::string str8 = "This is a\nmultiline string\n"
            "that has many lines";
    std::regex reg8 ("\n");
    std::string noLBStr = std::regex_replace(str8, reg8, " ");

    std::cout << noLBStr << "\n";
    
    std::cout << "\n";

    std::string str9 = "12345";
    std::regex reg9 ("\\d");
    PrintMatches2(str9, reg9);

    std::string str10 = "123 12345 123456 1234567";
    std::regex reg10 ("\\d{5,7}");
    PrintMatches2(str10, reg10);

    std::string str11 = "412-867-5309";
    std::regex reg11 ("\\w{3}-\\w{3}-\\w{4}");
    PrintMatches2(str11, reg11);

    std::string str12 = "Toshio Muramatsu";
    std::regex reg12 ("\\w{2,20}\\s\\w{2,20}");
    PrintMatches2(str12, reg12);

    std::string str13 = "a as ape bug";
    std::regex reg13 ("a[a-z]+");
    PrintMatches2(str13, reg13);
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