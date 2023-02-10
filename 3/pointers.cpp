#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){
    int age = 43;
    int* pAge = NULL;

    pAge = &age;

    std::cout << "Address : " << pAge << "\n";

    std::cout << "Value at Address " << pAge << " : " <<
            *pAge << "\n";

    int intArray[] = {1,2,3,4};
    int* pintArray = intArray;

    std::cout << "1st " << *pintArray << 
            " Address " << pintArray << "\n";
    pintArray++;
    std::cout << "2nd " << *pintArray <<
            " Adress " << pintArray << "\n";
    pintArray--;
    std::cout << "1st " << *pintArray << 
        " Address " << pintArray << "\n";

    return 0;
}