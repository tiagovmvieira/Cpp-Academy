#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>

#include <list>


bool isEven(const int& val);

int main(){

    int arr[5] = {1,2,3,4,5};

    std::list<int> list1;
    list1.insert(list1.begin(), arr, arr+5);
    list1.assign({10, 20, 30});
    list1.push_back(5);
    list1.push_front(1);

    std::cout << "Size : " << list1.size() << "\n";
    
    std::list<int>::iterator it = list1.begin();
    
    std::advance(it, 1);
    std::cout << "2nd Index : " << *it << "\n";

    it2 = list1.begin();
    list1.insert(it2, 8);
    list1.erase(list1.begin());
    it2 = list1.begin();
    std::list<int>::iterator it3 = list.begin();
    std::advance(it3, 2);
    list1.erase(it2, it3);
    list1.pop_front();
    list1.pop_back();

    int arr2[6] = {10, 9, 8, 7, 6, 6};
    std::list<int> list2;
    list2.insert(list2.begin(), arr2, arr2+6);
    list2.sort();
    list2.reverse();
    list2.unique();
    list2.remove(6)
    list2.remove_if(isEven);
    list1.merge(list2);


    for(int i : list1){
        std::cout << i << "\n";
    }

    std::cout << "\n";

    for(int i : list2){
        std::cout << i << "\n";
    }


    return 0;
}

bool isEven(const int val){
    return (val % 2) == 0;
}