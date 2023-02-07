#include <cstdlib>
#include <iostream>

int main(){

    int arrnNums[10] = {1};

    std::cout << "1st Value of arrnNums : " << arrnNums[0] << "\n";
    std::cout << "2nd Value arrnNums : " << arrnNums[1] << "\n";
    std::cout << "3rd Value arrnNums : " << arrnNums[2] << "\n";

    std::cout << "\n";
    int arrnNums2[] = {1, 2, 3};

    std::cout << "1st Value of arrnNums2 : " << arrnNums2[0] << "\n";
    std::cout << "2nd Value of arrnNums2 : " << arrnNums2[1] << "\n";
    std::cout << "3rd Value of arrnNums2 : " << arrnNums2[2] << "\n";

    std::cout << "\n";
    int arrnNums3[5] = {8, 9};

    std::cout << "1st Value of arrnNums3 : " << arrnNums3[0] << "\n";
    std::cout << "2nd Value of arrnNums3 : " << arrnNums3[1] << "\n";
    std::cout << "3rd Value of arrnNums3 : " << arrnNums3[2] << "\n";

    arrnNums3[2] = 3;

    std::cout << "3rd Value of arrnNums3 : " << arrnNums3[2] << "\n";
    std::cout << "\n";

    // multidimensional arrays
    int arrnNums4[2][2][2] = {{{1, 2}, {3, 4}},
    {{5, 6}, {7, 8}}};

    std::cout << "2nd Value of the second sheet of the column of the second row " << arrnNums4[1][1][1] << "\n";
    
    std::cout << "Array Size of arrNums : " << sizeof(arrnNums) / sizeof(*arrnNums) << "\n";
    
    return 0;
}