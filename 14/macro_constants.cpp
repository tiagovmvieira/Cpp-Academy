#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

#define PI 3.14159

#define AREA_CIRCLE(radius) (PI * (std::pow(radius, 2)))

int main(){

    std::cout << "Circle Area : "<<
        AREA_CIRCLE(5) << "\n";

    return 0;
}