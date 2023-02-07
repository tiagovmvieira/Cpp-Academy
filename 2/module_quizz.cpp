#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main(){
    // Enter calculation (ex. 5 + 6) : 10 - 6
    // 10.0 - 6.0 = 4.0
    // Please enter only +, -, *, /

    double dbNum1, dbNum2;
    std::string sCalculation = "";
    std::vector<std::string> vectsCalc;
    
    std::cout << "Enter your calculation (ex. 5 + 6) : ";
    getline(std::cin, sCalculation);

    std::stringstream ss(sCalculation);
    std::string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vectsCalc.push_back(sIndivStr);
    }

    dbNum1 = std::stoi(vectsCalc[0]);
    dbNum2 = std::stoi(vectsCalc[2]);
    std::string sOperation = vectsCalc[1];

    if((sOperation ==  "+")){
        double dbNum3 = dbNum1 + dbNum2;
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, dbNum3);
    }   else if((sOperation == "-")){
        double dbNum3 = dbNum1 - dbNum2;
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, dbNum3);
    }   else if((sOperation == "*")){
        double dbNum3 = dbNum1 * dbNum2;
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, dbNum3);
    }   else if((sOperation == "/")){
        double dbNum3 = dbNum1 / dbNum2;
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, dbNum3);
    } else {
        std::cout << "Please enter only +, -, *, /" << "\n";
    }

    return 0;
}