#include <iostream>

using namespace std;

class Shape {
    public:
    Shape(double height, double width){
        this->height = height;
        this->width = width;
    }
    
    virtual double area() = 0;
    
    protected:
    double height, width;
};

class Rectangle : public Shape {
    public:
    Rectangle(double height, double width) : Shape(height, width){ }
    
    double area(){
        return height * width;
    }
};

class Square : public Rectangle {
    public:
    Square(double side) : Rectangle(side, side) { }
};

class Triangle : public Shape {
    public:
    Triangle(double height, double base) : Shape(height, base){ }
    
    double area(){
        return 0.5 * height * width;
    }
};

int main(){
    //Shape x(2.0, 3.0);
    
    Rectangle r(5.0, 3.0);
    Triangle t(5.0, 3.0);
    Square s(5.0);
    
    cout << "Rectangle area: " << r.area() << endl;
    cout << "Triangle area: " << t.area() << endl;
    cout << "Square area: " << s.area() << endl;
    
    return 0;
}