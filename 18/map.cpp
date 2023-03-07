#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <ctime>

#include <map>

int main(){
    std::map<int, std::string> map1;

    map1.insert(std::pair <int, std::string> (1, "Bart"));
    map1.insert(std::pair <int, std::string> (2, "Lisa"));
    map1.insert(std::pair <int, std::string> (3, "Marge"));
    map1.insert(std::pair <int, std::string> (4, "Homer"));

    auto match = map1.find(1);
    std::cout << match->second << "\n"; // second here points to value of the found key
    auto bart = map1.lower_bound(1);
    std::cout << "LB : " << bart-> second << "\n";
    
    auto lisa = map1.upper_bound(1);
    std::cout << "UB : " << lisa-> second << "\n";

    std::cout << "\n";

    std::map<int, std::string>::iterator it2;
    for(it2 = map1.begin(); it2 != map1.end(); ++it2){
        std::cout << "Key " << it2->first << "\n";
        std::cout << "Value " << it2-> second << "\n";
    }

    return 0;
}