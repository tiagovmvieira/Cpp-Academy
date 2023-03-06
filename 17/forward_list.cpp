#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>

#include <forward_list>

bool isEven(const int val);

int main(){
    std::forward_list<int> fl1;
    fl1.assign({1, 2, 3, 4});
    fl1.push_front(0);
    fl1.pop_front();

    std::cout << "Front : " << fl1.front() << "\n";
    std::forward_list<int>::iterator it = fl1.begin();
    it = fl1.insert_after(it, 5); // the iterator is changed
    it = fl1.erase_after(fl1.begin());
    fl1.emplace_front(6);
    fl1.remove(6);
    fl1.remove_if(isEven);
    std::forward_list<int> fl2;

    fl2.assign({9, 8, 7, 6, 6});
    fl2.unique();
    fl2.sort();
    fl2.reverse();

    fl1.merge(fl2);
    fl1.clear();
    
    for(int i : fl1){
        std::cout << i << "\n";
    }

    std::cout << "\n";

    for(int i : fl2){
        std::cout << i << "\n";
    }


    return 0;
}

bool isEven(const int val){
    return (val % 2) == 0;
}
