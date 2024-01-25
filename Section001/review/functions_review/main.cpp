#include <iostream>

using namespace std;

const double PI = 3.14;

double circleArea(double);
void timesTwo(double&);

int main(){
    double radius = 4.0;
    double area = circleArea(radius);
    
    cout << area << endl;
    
    double x = 2;
    timesTwo(x);
    timesTwo(x);
    cout << x << endl;
    
    return 0;
}

double circleArea(double radius){
    return PI * radius * radius;
}

void timesTwo(double& r){
    r = r * 2;
}