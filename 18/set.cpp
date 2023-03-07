#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <ctime>

#include <set>

int main()
{
    std::set<int> set1 {5,4,3,2,1,1};
    std::cout << "Size : " << set1.size() <<
            "\n";

    set1.insert(0);
    
    // define an iterator
    std::set<int>::iterator it = set1.begin();
    for(int i = 0; i < 3; ++i){
        it++;
    }
    std::cout << "4th : " << *it << "\n";
    set1.erase(5);
    it = set1.end();
    std::advance(it, -2);

    set1.erase(it, set1.end());

    int arr[] = {6, 7, 8, 9};
    set1.insert(arr, arr+4);

    auto val = set1.find(6);
    std::cout << "Found : " << *val << "\n";

    auto eight = set1.lower_bound(8);
    std::cout << "8 : " << *eight << "\n";

    auto nine = set1.upper_bound(8);
    std::cout << "9 : " << *nine << "\n";

    std::set<int> set2 {10, 11};
    set1.swap(set2);

    if(!set1.empty()){
        for(int i : set1){
            std::cout << i << "\n";
        }
    } else {
        std::cout << "Set is empty" << "\n";
    }
    return 0;
}