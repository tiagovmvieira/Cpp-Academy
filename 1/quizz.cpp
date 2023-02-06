#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>


int main() {

    std::string sMiles;
    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);

    long double ldMiles = std::stold(sMiles);

    printf("%s miles equals %.4Lf kilometers\n", sMiles.c_str(), ldMiles * 1.60934);

    return 0;
}