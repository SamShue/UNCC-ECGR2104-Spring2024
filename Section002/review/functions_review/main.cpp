#include <iostream>
#include "utils.h"

using namespace std;

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
    
    int a = 3;
    int b = 6;
    swap(a, b);
    
    return 0;
}