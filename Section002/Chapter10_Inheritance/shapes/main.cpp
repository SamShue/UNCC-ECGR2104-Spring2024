#include <iostream>

using namespace std;

class Shape {
    protected:
    double height, width;
    
    Shape(double height, double width){
        this->height = height;
        this->width = width;
    }
    
    public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
    public:
    Rectangle(double height, double width) : Shape(height, width) { }
    
    double area(){
        return width * height;
    }
};

class Square : public Rectangle {
    public:
    Square(double side) : Rectangle(side, side) { }
};

class Triangle : public Shape {
    public:
    Triangle(double height, double base) : Shape(height, base) { }
    
    double area(){
        return 0.5 * width * height;
    }
};

int main(){
    Shape x(5.0, 5.0);
    
    Rectangle r(5.0, 3.0);
    Triangle t(5.0, 3.0);
    Square s(5.0);
    
    cout << "Rectangle area: " << r.area() << endl;
    cout << "Triangle area: " << t.area() << endl;
    cout << "Square area: " << s.area() << endl;
    
    return 0;
}