#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int StartNum, int EndNum, int Step);

int main(){

    /*
    How tall is the tree: 5

        #
       ###
      #####
     #######
    #########
        #  

    */

    int treeHeight = 0, spaces = 0, hashes = 1, stumpSpaces = 0;
    std::cout << "How tall is the three : ";
    std::cin >> treeHeight;
    spaces = treeHeight - 1;
    stumpSpaces = treeHeight - 1;

    while(treeHeight != 0){
        for(auto x: Range(1, spaces, 1)){
            std::cout << " ";
        }

        for(auto y: Range(1, hashes, 1)){
            std::cout << "#";
        }

        std::cout << "\n";
        spaces -= 1;
        hashes += 2;
        treeHeight -= 1;
    }

    for(auto x: Range(1, stumpSpaces, 1)){
        std::cout << " ";
    }
    std::cout << "#" << "\n";

   return 0;
}

// FUNCTIONS    
std::vector<int> Range(int StartNum, int EndNum, int Step){
    int i = StartNum;

    std::vector<int> range;
    while(i <= EndNum){
        range.push_back(i);
        i += Step;
    }

    return range;
}

// END FUNCTIONS