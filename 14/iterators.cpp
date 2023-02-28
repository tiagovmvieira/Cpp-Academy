#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <iterator>

int main(){

    std::vector<int> nums2 = {1,2,3,4};
    std::vector<int>::iterator itr;

    for(itr = nums2.begin(); itr < nums2.end(); itr++){
        std::cout << *itr << "\n";
    }

    return 0;
}