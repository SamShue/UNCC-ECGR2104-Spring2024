#include <iostream>
#include "utils.h"

using namespace std;

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