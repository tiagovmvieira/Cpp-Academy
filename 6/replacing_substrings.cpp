#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> FindSubstringMatches(std::string theString, std::string theWord);

std::string ReplaceAllSubstrings(std::string theString, std::string TheWordToBeReplaced, std::string TheWordToReplace);

int main(){
    std::cout << ReplaceAllSubstrings("to know or not to know", "know", "be")
        << "\n";

    return 0;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string theWord){
    std::vector<int> vecsIndexes;
    int index = theString.find(theWord, 0);
    
    while(index != std::string::npos){
        vecsIndexes.push_back(index);
        index = theString.find(theWord, index + 1);
    }

    return vecsIndexes;
}

std::string ReplaceAllSubstrings(std::string theString, std::string TheWordToBeReplaced, std::string TheWordToReplace){
    std::vector<int> matches = FindSubstringMatches(theString, TheWordToBeReplaced);

    if(matches.size() != 0){
        int lengthDifference = TheWordToReplace.size() - TheWordToBeReplaced.size();
        int timesLooped = 0;
        for(int i = 0; i < matches.size(); ++i){
            theString.replace(matches[i] + (timesLooped * lengthDifference),
                            TheWordToBeReplaced.size(),
                            TheWordToReplace);
            timesLooped++;
        }
    }

    return theString;
}