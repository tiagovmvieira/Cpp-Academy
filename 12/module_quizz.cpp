#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

#include <fstream>

std::vector<std::string> StringToVector(std::string theString, char separator);

int main(){
    std::ofstream writeToFile;
    std::ifstream readFromFile;
    std::string txtToWrite = "";
    std::string txtFromFile = "";

    // ios::app : Append to the end of the file
    // ios::trunc : If the file exists delete content
    // ios::in : Open file for reading
    // ios::out : Open file for writing
    // ios:ate : Open writing and move to the end of the file

    writeToFile.open("text.txt", std::ios_base::out |
            std::ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Beggining of File\n";
        std::cout << "Enter data to write : ";
        getline(std::cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }

    readFromFile.open("text.txt", std::ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);
            std::cout << txtFromFile << "\n";

            std::vector<std::string> vect = StringToVector(txtFromFile, ' ');
            int wordsInLine = vect.size();
            std::cout << "Words in Line : " << wordsInLine << "\n";

            int charCount = 0;
            for(auto word: vect){
                for(auto letter: word){
                    charCount++;
                }
            }
            int avgNumber = charCount / wordsInLine;
            std::cout << "Average Character(s) per word: " <<
                avgNumber << "\n";
        }
        readFromFile.close();
    }

    return 0;
}

std::vector<std::string> StringToVector(std::string theString, char separator){
    std::vector<std::string> vecsWords;

    std::stringstream ss(theString);
    std::string sIndivStr;

    while(getline(ss, sIndivStr, separator)){
        vecsWords.push_back(sIndivStr);
    }

    return vecsWords;

}