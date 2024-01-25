#include "utils.h"

using namespace std;

void swap(double& x, double& y){
    cout << "Double version" << endl;
    double temp = x;
    x = y;
    y = temp;
}

void swap(int& x, int& y){
    cout << "Int version" << endl;
    int temp = x;
    x = y;
    y = temp;
}

double circleArea(double r){
    double area = PI * r * r;
    return area;
}

void timesTwo(double& x, double& y){
    x = x * 2.0;
    y = y * 2.0;
}