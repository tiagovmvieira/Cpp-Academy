#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// global variable
int g_iRandNum = 0;

// constant global variable
const double PI = 3.14159;

int main(){
    bool bMarried = true;
    char chMyGrade = 'A';
    unsigned short int u16Age = 43;
    short int siWeight = 180;
    int nDays = 7;
    long lBigNum = 1100000;
    float fPi = 3.15159;
    double dbBigFloat = 1.11111111111111111111;
    long double ldPi = 3.14159;
    auto whatWillIBe = true;

    std::cout << "Min bool " <<
            std::numeric_limits<bool>::min() << "\n";

    std::cout << "Max bool " <<
            std::numeric_limits<bool>::max() << "\n";

    std::cout << "Min unsigned short int " <<
            std::numeric_limits<unsigned short int>::min() << "\n";
    std::cout << "Max unsigned short int " <<
            std::numeric_limits<unsigned short int>::max() << "\n";
            
    std::cout << "Min short int " <<
            std::numeric_limits<short int>::min() << "\n";
    std::cout << "Max short int " <<
            std::numeric_limits<short int>::max() << "\n";

    std::cout << "Min int " <<
            std::numeric_limits<int>::min() << "\n";
    std::cout << "Max int " <<
            std::numeric_limits<int>::max() << "\n";

    std::cout << "Min float " <<
            std::numeric_limits<float>::min() << "\n";                
    std::cout << "Max float " <<
            std::numeric_limits<float>::max() << "\n";

    std::cout << "Min long double " <<
            std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max long double " <<
            std::numeric_limits<long double>::max() << "\n";

    // number of bytes used
    std::cout << "int size " << sizeof(int) << "\n";

    return 0;
}