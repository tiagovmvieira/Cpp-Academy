#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void AssignAge3(int* pAge);

int main(){

    int age = 43;
    AssignAge3(&age);

    std::cout << "Pointer Age " << age << "\n";

    return 0;
}

// FUNCTIONS
void AssignAge3(int* pAge){
    *pAge = 22;
}