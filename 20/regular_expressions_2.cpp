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


int main(){
    // Everything covered previously
    // [] : Match what is in the brackets
    // [^ ] : Match anything not in the brackets.
    // . : Match any 1 character or space
    // + : Match 1 or more of what proceeds
    // \n : Newline
    // \d : Any 1 number
    // \D : Anything but a number
    // \w : Same as [a-zA-Z0-9_]
    // \W : Same as [^a-zA-Z0-9_]
    // \s : Same as [\f\n\r\t\v]
    // \S : Same as [^\f\n\r\t\v]
    // {5} : Match 5 of what proceeds the curly brackets
    // {5,7} : Match values that are between 5 and 7 in length
    // () : Return only what is between ()

    std:: string str1 = "cat cats";
    std::regex reg1 ("([cat]+s?)");
    PrintMatches(str1, reg1);

    std:: string str2 = "doctor doctors doctor's";
    std::regex reg2 ("([doctor]+[`s]*)");
    PrintMatches(str2, reg2);

    std::string str3 = "Just some words\n"
            "and some more\r\n"
            "and more\n";
    std::regex reg3 ("[\r]?\n");
    std::string finalString = std::regex_replace(str3, reg3, " ");
    std::cout << finalString << "\n";

    std::cout << "\n";

    // lazy matches
    std::string str4 = "<name>Life On Mars</name>"
            "<name>Freaks and Geeks</name>";
    std::regex reg4 ("<name>(.*?)</name>");

    PrintMatches(str4, reg4);

    // word boundaries
    std::string str5 = "ape at the apex";
    std::regex reg5 ("(\\bape\\b)");

    PrintMatches(str5, reg5);

    // string boundaries
    std::string str6 = "Match everything up to @";
    std::regex reg6 ("(^.*[^@])");

    PrintMatches(str6, reg6);

    std::string str7 = "Get this string";
    std::regex reg7 ("([^@\\s].*$)");

    PrintMatches(str7, reg7);

    std::string str8 = "206-709-3100 202-456-1111 212-832-2000 206-123-4567";
    std::regex reg8 (".{3}-(.{8})");

    PrintMatches(str8, reg8);

    std::string str9 = "My number is 904-285-3700";
    std::regex reg9 ("(.{3})-(.*)-(.*)");
    std::smatch matches;
    if(std::regex_search(str9, matches, reg9)){
        for(int i = 1; i < matches.size(); i++){
            std::cout << matches[i] << "\n";
        }
    }

    return 0;
}

void PrintMatches(std::string str, std::regex reg){
    std::smatch matches;
    std::cout << std::boolalpha;

    while(std::regex_search(str, matches, reg)){
        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();
    }
    std::cout << "\n";
}