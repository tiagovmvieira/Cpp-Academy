#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<std::string> StringToVector(std::string theString, char separator);
std::string VectorToString(std::vector<std::string>& vec, char separator);

int main(){

    std::vector<std::string> myVec = StringToVector("This is a random string", ' ');

    for(int i = 0; i < myVec.size(); ++i){
        std::cout << myVec[i] << "\n";
    }

    std::vector<std::string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Sue";
    vCusts[2] = "Tom";

    std::string sCusts = VectorToString(vCusts, ' ');
    std::cout << sCusts << "\n";

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

std::string VectorToString(std::vector<std::string>& theVector, char separator){
    std::string sCusts("");

    for(int i = 0; i < theVector.size(); ++i){
        sCusts += theVector[i] + separator;
    }

    return sCusts;
}