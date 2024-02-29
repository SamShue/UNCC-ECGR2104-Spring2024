#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {
    double real;
    double imag;
    
    Complex(double real, double imag);
    
    void print();
    
    Complex add(Complex rhs);
    Complex operator+(Complex rhs);
    Complex operator+(int rhs);
    void operator+=(Complex rhs);
    Complex operator-(Complex rhs);
    bool operator==(Complex rhs);
};

#endif