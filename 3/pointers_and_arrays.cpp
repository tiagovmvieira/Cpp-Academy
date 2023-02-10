#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void DoubleArray(int* arr, int size); 

int main(){
    
    int intArray[] = {1,2,3,4};
    int SizeOfArray = sizeof(intArray);
    DoubleArray(intArray, SizeOfArray);
    for(int i = 0; i < 4; ++i){
        std::cout << "Array " << intArray[i] << "\n";
    }
    
    return 0;
}

// FUNCTIONS
void DoubleArray(int* arr, int size){
    for(int i = 0; i < size; ++i){
        arr[i] = arr[i] *2;
    }       
}

// END FUNCTIONS