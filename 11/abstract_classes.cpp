#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>

class Shape{
public:
    virtual double Area() = 0;
};

class Circle : public Shape{
protected:
    double diameter;
public:
    Circle(double d){
        diameter = d;
    }
    double Area() override{
        return 3.14159 * std::pow((diameter / 2), 2);
    }
};

class Rectangle : public Shape{
protected:
    double height, width;
public:
    Rectangle(double h, double w){
        height = h;
        width = w;
    }
    double Area() override{
        return height * width;
    }
};

void ShowArea(Shape& shape){
    std::cout << "Area : " << shape.Area() << "\n";
}

int main(){
    Rectangle rectangle(10, 5);
    Circle circle(10);
    ShowArea(rectangle);
    ShowArea(circle);

    return 0;
}