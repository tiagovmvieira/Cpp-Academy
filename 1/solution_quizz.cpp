#include <cstdlib>
#include <iostream>


int main(){
    // km = miles * 1.60934
    // Enter Miles : 5
    // 5 miles equals 8.0467 kilometers

    std::string sMiles;
    double dMiles, dKilometers;

    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);

    dMiles = std::stod(sMiles);

    dKilometers = dMiles * 1.60934;

    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);
}