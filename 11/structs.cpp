#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>


struct Shape{
    double length, width;

    // constructor
    Shape(double l = 1, double w = 1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }
private:
    int id;
}

struct Circle: Shape{
    Circle(double diameter){
        this -> diameter = diameter;
    }
    double Area(){
        return 3.14159 * std::pow((width / 2), 2)
    }
}


int main(){

    Shape shape(10, 10);
    std::cout << "Square Area : " <<
            shape.Area() << "\n";

    Circle circle(10);
    std::cout << "Circle Area : " <<
            circle.Area() << "\n";
    
    Shape rectangle{10, 15};
    std::cout << "Rectangle Area : " <<
            rectangle.Area() << "\n";

    return 0;
}