#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void AssignAge(int age);
int AssignAge2(int age);

int main(){

    int age = 43;

    AssignAge(age);
    std::cout << "New Age " << age << "\n";

    age = AssignAge2(age);
    std::cout << "Returned Age " << age << "\n";

    return 0;
}

// FUNCTIONS
void AssignAge(int age){
    age = 24;
}

int AssignAge2(int age){
    age = 24;
    return age;
}


// END FUNCTIONS