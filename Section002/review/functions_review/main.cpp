#include <iostream>

using namespace std;

const double PI = 3.14;

double circleArea(double);
void timesTwo(double&, double&);

void swap(double& x, double& y){
    double temp = x;
    x = y;
    y = temp;
}

int main(){
    double radius = 3.0;
    double area = circleArea(radius);
    double area2 = circleArea(4.5);
    cout << area << endl;
    cout << PI << endl;
    
    double x = 6;
    double y = 3;
    timesTwo(x, y);
    cout << x << " " << y << endl;
    
    x = 4;
    y = 2;
    swap(x, y);
    
    return 0;
}

double circleArea(double r){
    double area = PI * r * r;
    return area;
}

void timesTwo(double& x, double& y){
    x = x * 2.0;
    y = y * 2.0;
}