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
    std::multimap<int, std::string> mmap1;

    mmap1.insert(std::pair <int, std::string> (1, "Bart"));
    mmap1.insert(std::pair <int, std::string> (1, "Lisa"));
    mmap1.insert(std::pair <int, std::string> (3, "Marge"));

    std::map<int, std::string>::iterator it3;
    for(it3 = mmap1.begin(); it3 != mmap1.end(); ++it3){
        std::cout << "Key " << it3->first << "\n";
        std::cout << "Value " << it3-> second << "\n";
    }

    return 0;
}