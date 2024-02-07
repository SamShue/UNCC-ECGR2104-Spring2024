#include <iostream>

using namespace std;

struct Point2d {
    double x;
    double y;
    
    Point2d(double x, double y){
        this->x = x;
        this->y = y;
    }
    
    Point2d add(Point2d rhs){
        Point2d r(0.0, 0.0);
        r.x = this->x + rhs.x;
        r.y = this->y + rhs.y;
        return r;
    }
    
    void Print(){
        cout << "x: " << x << " y: " << y << endl;
    }
    
    Point2d operator+(Point2d rhs){
        Point2d r(0.0, 0.0);
        r.x = this->x + rhs.x;
        r.y = this->y + rhs.y;
        return r;
    }
    
    Point2d operator-(Point2d rhs){
        return Point2d(this->x - rhs.x, this->y - rhs.y);
    }
    
};

int main(){
    Point2d p1(2.5, 3.0);
    Point2d p2(4.0, 7.3);
    
    p1.Print();
    p2.Print();
    
    Point2d p3(0.0, 0.0);
    //p3.x = p1.x + p2.x;
    //p3.y = p1.y + p2.y;
    //p3 = p1.add(p2);
    
    p3 = p1 + p2;
    p3 = p3 - p1;
    
    p3.Print();
    return 0;
}