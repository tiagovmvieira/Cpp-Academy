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

int main(){

    enum day{Mon=1, Tues, Wed, Thur, Fri=6};
    enum day tuesday = Tues;
    
    std::cout << "Tuesday is the " << tuesday << 
            "nd day of the week" << "\n";
    
    for(int i = Mon; i < Fri; i++){
        std::cout << i << "\n";
    }

    return 0;
}