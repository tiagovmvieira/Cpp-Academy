#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> FindSubstringMatches(std::string &theString, std::string theWord);

int main(){
    std::string phrase = "To be or not to be";
    std::vector<int> matches = FindSubstringMatches(phrase, "be");

    for(int i = 0; i < matches.size(); ++i){
        std::cout << matches[i] << "\n";
    }
    return 0;
}

std::vector<int> FindSubstringMatches(std::string &theString, std::string theWord){
    std::vector<int> vecsIndexes;
    int index = theString.find(theWord, 0);
    
    while(index != std::string::npos){
        vecsIndexes.push_back(index);
        index = theString.find(theWord, index + 1);
    }

    return vecsIndexes;
}